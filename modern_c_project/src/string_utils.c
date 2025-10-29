#include "string_utils.h"

size_t str_len(const char *s) {
    size_t len = 0;
    while (s && s[len] != '\0') len++;
    return len;
}

int str_eq(const char *a, const char *b) {
    if (!a || !b) return 0;
    for (size_t i = 0; a[i] || b[i]; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}
