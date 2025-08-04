
#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <stdexcept>

class invalidCharacterException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "invalidCharacterExcpeption. Must be A-Z or a-z.";
    }
};

class invalidRangeException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return "invalidCharacterExcpeption - out of valid letter range.";
    }
};

#endif