#include <execinfo.h>
#include <cxxabi.h>
#include <malloc.h>
#include <string>
#include <string.h>
#include <sstream>
#include "bt.h"

using namespace std;

static void demangle(char** stack_strings, size_t stack_depth, ostringstream& os);

void bt_error::bt()
{
    _depth = backtrace(_frames, _max_depth);
}

std::string bt_error::trace()
{
    char **stack_strings = backtrace_symbols(_frames, _depth);

    ostringstream os;
    os << "stack at " <<_file << ':' << _line << "\n";
    demangle(stack_strings,_depth,os);

    free(stack_strings); // malloc()ed by backtrace_symbols
    return os.str();
}

static void demangle(char** stack_strings, size_t stack_depth, ostringstream& os)
{
    for (size_t i = 1; i < stack_depth; i++) {
        size_t sz = 200; // just a guess, template names will go much wider
        char *function = static_cast<char*>(malloc(sz));
        char *begin = 0, *end = 0;
        // find the parentheses and address offset surrounding the mangled name
        for (char *j = stack_strings[i]; *j; ++j) {
            if (*j == '(') {
                begin = j;
            }
            else if (*j == '+') {
                end = j;
            }
        }
        if (begin && end) {
            *begin++ = 0;
            *end = 0;
            // found our mangled name, now in [begin, end)

            int status;
            char *ret = abi::__cxa_demangle(begin, function, &sz, &status);
            if (ret) {
                // return value may be a realloc() of the input
                function = ret;
            }
            else {
                // demangling failed, just pretend it's a C function with no args
                strncpy(function, begin, sz);
                strncat(function, "()", sz);
                function[sz-1] = 0;
            }
            os << "   " << stack_strings[i] << ":" << function << "\n";
        }
        else
        {
            // didn't find the mangled name, just print the whole line
            os << "    " << stack_strings[i] << "\n";
        }
        free(function);
    }
}
