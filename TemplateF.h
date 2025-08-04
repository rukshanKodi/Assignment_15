#ifndef TEMPLATEF_H
#define TEMPLATEF_H

#include <cmath>
template <typename TempL>
TempL half(TempL value)
{
    return value / 2;
}

inline int half(int value)
{
    return static_cast<int>(round(static_cast<double>(value) / 2));
}

#endif