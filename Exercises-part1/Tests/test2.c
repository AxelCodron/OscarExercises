#include <criterion/criterion.h>
#include "../header.h"

Test(exercise2, test1)
{
    cr_assert(FoncionQuiAjouteDeuxNombre(1, 1) == 2);
}

Test(exercise2, test2)
{
    cr_assert(FoncionQuiAjouteDeuxNombre(1, -1) == 0);
}

Test(exercise2, test3)
{
    cr_assert(FoncionQuiAjouteDeuxNombre(10, 10) == 20);
}

Test(exercise2, test4)
{
    cr_assert(FoncionQuiAjouteDeuxNombre(0, 0) == 0);
}
