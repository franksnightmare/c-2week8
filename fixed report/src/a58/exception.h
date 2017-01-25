#ifndef INCLUDED_EXCEPTION_
#define INCLUDED_EXCEPTION_

#include <string>
#include <exception>

class Exception: public std::exception
{
    std::string d_what;

    public:
        Exception() = default;

        std::string &str();
        char const *what() const
            noexcept(true) override;
};

std::string &Exception::str()
{
    return d_what;
}

template <typename T>
inline Exception &&operator<<(Exception &&in, T rp)
{
    in.str() += rp;
    return std::move(in);
}
#endif
