#include <stdio.h>

int main(void) {
    int d = 10;
    int o = 010;
    int h = 0x10;
    printf("DEC_10: %d\n", d);
    printf("OCT_10: %d\n", o);
    printf("HEX_10: %d\n", h);

    printf("INT_SUFFIX: %zu %zu %zu %zu\n",
           sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
    printf("FLOAT_SUFFIX: %zu %zu %zu\n",
           sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);

    char c = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %zu %zu %zu\n",
           sizeof('A'), sizeof(c), sizeof("A"));
           
    return 0;
}