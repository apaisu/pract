#include <stdio.h>

int main(void) {
    char s[100];
    int width;

    scanf("%99s %d", s, &width);

    printf("%*s\n", width, s);
    printf("%-*s\n", width + 5, s);

    return 0;
}