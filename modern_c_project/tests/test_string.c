#include <criterion/criterion.h>
#include "string_utils.h"

Test(String, length) {
    cr_assert_eq(str_len("clang"), 5);
    cr_assert_eq(str_len(""), 0);
}

Test(String, equality) {
    cr_assert(str_eq("clang", "clang"));
    cr_assert_not(str_eq("clang", "llvm"));
}
