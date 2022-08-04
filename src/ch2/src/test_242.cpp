#include <ros/ros.h>

int main()
{
    int i = -1, &r = i;
    const int j = -1, &rr = 0;

    int null = 0, *p = &null;
    return 0;
}