#include <ros/ros.h>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    // decltype((b)) d = a;
    decltype(a = b) d = a;
    // do not do this function:a=b
    // but only use this function to estimate the parameter's type

    // ++c;
    // ++d;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    return 0;
}