#include <stdio.h>
#include <string.h>

#define DISTRO "LinuxDistro"

int main(void) {
    const char RDATE[] = "2026";

    printf("DISTRO: %s\n", DISTRO);
    printf("RDATE: %s\n", RDATE);
    printf("STRLEN: %zu\n", strlen(DISTRO));
    printf("SIZEOF: %zu\n", sizeof(DISTRO));

    return 0;
}

/*
Программа показывает два способа задать строковую константу

Разница: длина (strlen) - это количество символов до '\0', а размер (sizeof) - количество байт в памяти, включая '\0'. Размер литерала всегда на единицу больше длины
*/
