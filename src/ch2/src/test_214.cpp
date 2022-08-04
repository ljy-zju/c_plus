#include <ros/ros.h>

int i = 45;
int main()
{
    int i = 100, sum = 0;
    int k = i;
    std::cout << k << std::endl;

    for (int j = 0; j != 10; ++j)
    {
        sum += j;
        std::cout << j << " " << sum << std::endl;
    } // when out the for's space,
      // the int i param initialized in the for's space dead.

    // std::cout << j << " " << sum << std::endl;
    // error: ‘j’ was not declared in this scope
    std::cout << i << " " << sum << std::endl;

    int ival = 0;
    int ival2 = 4;
    int &ref_ival = ival;

    ref_ival = ival2; // this step only makes the value of ival = ival2 = 4
    // but does not make the ref_ival "bind" to ival2.

    std::cout << ival << std::endl;     // 4
    std::cout << ival2 << std::endl;    // 4
    std::cout << ref_ival << std::endl; // 4

    ref_ival = 3;

    std::cout << ival << std::endl;     // 3
    std::cout << ival2 << std::endl;    // 4
    std::cout << ref_ival << std::endl; // 3

    // cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
    // int &ref_ival = 1;

    // ‘ref_ival2’ declared as reference but not initialized
    // int &ref_ival2;

    int m, &ref_m = m;
    m = 5;
    ref_m = 10;
    std::cout << m << " " << ref_m << std::endl; // 10 10

    return 0;
}