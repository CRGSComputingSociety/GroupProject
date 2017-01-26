/*
    This is a utility file made by Abel, including common utility functions
    Do not worry if you don't understand something - but please don't change it!

    Usage example:
    If you're using just one function you can use
        utils::tostring(object);
    Or if you're using it more you can use instead:
        using namespace utils;
        tostring(object);
        readline();
*/

#include <sstream> // Stringstream, used in tostring()
#include <iostream> // Std::cout/cin

namespace utils {

    template <typename T>
    std::string tostring(T in) {
        std::stringstream ss; ss << in;
        return ss.str();
    }

    std::string readline() {
        std::string ret; std::getline(std::cin, ret);
        return ret;
    }

} // Namespace utils
