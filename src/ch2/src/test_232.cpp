#include <ros/ros.h>

int main()
{
    int ival = 0, *p1 = &ival;
    std::cout << ival << " " << p1 << " " << *p1 << std::endl;

    int ival2 = 1;
    p1 = &ival2;
    *p1 = 3;
    std::cout << ival << " " << ival2 << " " << p1 << " " << *p1 << std::endl;

    double dval = 3.14;
    const double *cp = &dval;
    std::cout << *cp << " \n" << std::endl;
    // const int temp = dval;
    // const int &ri = temp;
    const int &ri = dval;
    const double &rcd = dval;
    double &rd = dval;
    rd = 6.28;

    // ri = 6.28;
    std::cout << *cp << " \n" << std::endl;
    std::cout << dval << " " << ri << " " << rcd << " " << rd << std::endl;

    return 0;
}