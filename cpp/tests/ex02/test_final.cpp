#include <criterion/criterion.h>
#include <ostream>
#include <iostream>
#include "Workshop.hpp"

class OSRedirector {
    private:
        std::ostringstream _oss;
        std::streambuf *_backup;
        std::ostream &_C;

    public:
        OSRedirector(std::ostream &c) : _C(c) {
            _backup = c.rdbuf();
            _C.rdbuf(_oss.rdbuf());
        }

        ~OSRedirector() {
            _C.rdbuf(_backup);
        }

        const std::string getContent() {
            _oss << std::flush;
            return _oss.str();
        }
};