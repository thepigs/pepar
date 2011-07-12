#ifndef BT_H
#define BT_H

#include <stdexcept>

#define THROW(c,s) throw c(s,__FILE__,__LINE__)

std::string print_trace();

class bt_error : public std::runtime_error
{
private:
    static const size_t _max_depth = 10;
    void *_frames[_max_depth];
    int _depth;
    int _line;
    const char* _file;
    void bt();
public:
    bt_error(const std::string& s, const char* file, int line) : std::runtime_error(s),_line(line),_file(file) {
        bt();
    }
    std::string trace();
    virtual ~bt_error() throw () {}
};

#endif
