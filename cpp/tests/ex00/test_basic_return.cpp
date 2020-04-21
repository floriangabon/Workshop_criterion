#include <criterion/criterion.h>
#include "Workshop.hpp"

Test(Redirector, get_number)
{
    Workshop test;
    int res = 0;

    test.setInt(1);
    res = test.getInt();
    // cr_...
}

Test(Redirector, get_not_the_good_number)
{
    Workshop test;
    int res = 0;

    test.setInt(1);
    res = test.getInt();
    // cr_... be careful, you have to test that res is different from 0
}

Test(Redirector, get_str)
{
    Workshop test;
    std::string res;

    test.setStr("I love criterion!");
    res = test.getStr();
    // cr_...
}