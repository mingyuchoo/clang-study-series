#include <criterion/criterion.h>
#include "math_utils.h"

Test(Math, add) {
    cr_assert_eq(add(2, 3), 5);
    cr_assert_eq(add(-1, 1), 0);
}

Test(Math, mul) {
    cr_assert_eq(mul(3, 4), 12);
}
