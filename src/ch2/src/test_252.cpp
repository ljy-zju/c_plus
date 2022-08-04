#include <ros/ros.h>

int main()
{
    // int i = 0, &r = i;
    // auto a = r;

    // const int ci = i, &cr = ci;
    // auto b = ci;
    // auto c = cr;
    // auto d = &i;
    // auto e = &ci;

    // auto &g = ci;
    // const auto &j = 42;

    // /* name | type
    //     a       int
    //     b       int
    //     c       int
    //     d       int *
    //     e       const int *

    //     g       const int reference
    //     j       const int reference
    // */

    // std::cout << "a=" << a << std::endl;
    // std::cout << "b=" << b << std::endl;
    // std::cout << "c=" << c << std::endl;
    // std::cout << "*d=" << *d << std::endl;
    // std::cout << "*e=" << *e << std::endl;
    // std::cout << "g=" << g << std::endl;
    // std::cout << "j=" << j << std::endl;

    // a = 1;
    // b = 2;
    // c = 3;
    // *d = 4;
    // // *e = 5;

    // // g = 6;
    // // j = 7;

    // std::cout << "a=" << a << std::endl;
    // std::cout << "b=" << b << std::endl;
    // std::cout << "c=" << c << std::endl;
    // std::cout << "*d=" << *d << std::endl;
    // std::cout << "*e=" << *e << std::endl;
    // std::cout << "g=" << g << std::endl;
    // std::cout << "j=" << j << std::endl;

    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;

    const auto j2 = i, &k2 = i;

    std::cout << "i=" << i << std::endl;
    std::cout << "j=" << j << std::endl;
    std::cout << "k=" << k << std::endl;
    std::cout << "*p=" << *p << std::endl;
    std::cout << "j2=" << j2 << std::endl;
    std::cout << "k2=" << k2 << std::endl;

    // /* name | type
    //     i       const int
    //     j       int
    //     k       const int reference
    //     p       const int *

    //     j2      const int
    //     k2      const int reference
    // */
    // i = 1;
    j = 2;
    // k = 3;
    // *p = 4;
    // j2 = 5;
    // k2 = 6;

    std::cout << "i=" << i << std::endl;
    std::cout << "j=" << j << std::endl;
    std::cout << "k=" << k << std::endl;
    std::cout << "*p=" << *p << std::endl;
    std::cout << "j2=" << j2 << std::endl;
    std::cout << "k2=" << k2 << std::endl;

    return 0;
}