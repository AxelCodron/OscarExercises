#include <criterion/criterion.h>
#include "../header.h"

Test(exercise3, addition1)
{
    cr_assert(addition(1, 1) == 2);
}

Test(exercise3, addition2)
{
    cr_assert(addition(1, -1) == 0);
}

Test(exercise3, addition3)
{
    cr_assert(addition(10, 10) == 20);
}

Test(exercise3, addition4)
{
    cr_assert(addition(0, 0) == 0);
}

Test(exercise3, soustraction1)
{
    cr_assert(soustraction(0, 1) == -1);
}

Test(exercise3, soustraction2)
{
    cr_assert(soustraction(1, 0) == 1);
}

Test(exercise3, soustraction3)
{
    cr_assert(soustraction(1, 1) == 0);
}

Test(exercise3, soustraction4)
{
    cr_assert(soustraction(10, 1) == 9);
}

Test(exercise3, multiplication1)
{
    cr_assert(multiplication(0, 1) == 0);
}

Test(exercise3, multiplication2)
{
    cr_assert(multiplication(1, -5) == -5);
}

Test(exercise3, multiplication3)
{
    cr_assert(multiplication(1, 1) == 1);
}

Test(exercise3, multiplication4)
{
    cr_assert(multiplication(10, 1) == 10);
}

Test(exercise3, division1)
{
    cr_assert(division(0, 1) == 0);
}

Test(exercise3, division2)
{
    cr_assert(division(1, 1) == 1);
}

Test(exercise3, division3)
{
    cr_assert(division(10, 2) == 5);
}

Test(exercise3, division4)
{
    cr_assert(division(10, 0) == -1);
}

Test(exercise3, modulo1)
{
    cr_assert(modulo(0, 1) == 0);
}

Test(exercise3, modulo2)
{
    cr_assert(modulo(1, 0) == -1);
}

Test(exercise3, modulo3)
{
    cr_assert(modulo(10, 2) == 0);
}

Test(exercise3, modulo4)
{
    cr_assert(modulo(10, 3) == 1);
}
