#include "lab03-test\histogram.h"

#include <cassert>

void test_positive()
{
    double min = 0;
    double max = 0;
    find_minmax({1, 2, 3}, min, max);
    assert(min == 1);
    assert(max == 3);
}
void test1()
{
    double min = 0;
    double max = 0;
    find_minmax({-5, -8, -10}, min, max);
    assert(min == -10);
    assert(max == -5);
}

void test2()
{
    double min = 0;
    double max = 0;
    find_minmax({5, 5, 5}, min, max);
    assert(min == 5);
    assert(max == 5);
}

void test3()
{
    double min = 0;
    double max = 0;
    find_minmax({6}, min, max);
    assert(min == 6);
    assert(max == 6);
}

void test4()
{
    double min = 0;
    double max = 0;
    find_minmax({}, min, max);
    assert(min == 0);
    assert(max == 0);
}

int main()
{
    test_positive();
    test1();
    test2();
    test3();
    test4();
}

