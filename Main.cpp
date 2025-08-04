#include <iostream>
#include <cmath>
using namespace std;

template <typename TemplParam>
TemplParam half(TemplParam value)
{
    return value / 2;
}

template <>
int half<int>(int value)
{
    return static_cast<int>(round(value / 2.0));
}

int main()
{
    cout << "half function:\n";

    float f = 9.5f;
    double d = 7.8;
    int i1 = 9;
    int i2 = 4;

    cout << "half(9.5f) = " << half(f) << endl;
    cout << "half(7.8) = " << half(d) << endl;
    cout << "half(9) = " << half(i1) << endl;
    cout << "half(4) = " << half(i2) << endl;

    return 0;
}