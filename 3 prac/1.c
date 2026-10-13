#include <stdio.h>
#include <string.h>

int main(void) {
    char a[20] = "SibSUTIS";

    printf("SIZEOF: %zu\n", sizeof(a));
    printf("STRLEN: %zu\n", strlen(a));
    printf("FREE_BYTES: %zu\n", sizeof(a) - (strlen(a) + 1));

    char b[20] = "СибГУТИ";

    printf("--- СибГУТИ ---\n");
    printf("SIZEOF: %zu\n", sizeof(b));
    printf("STRLEN: %zu\n", strlen(b));
    printf("FREE_BYTES: %zu\n", sizeof(b) - (strlen(b) + 1));

    return 0;
}

/*
Программа показывает разницу между размером массива и длиной строки

В ней 7 букв, но strlen показывает 14, а свободных байт 5.
В кодировке UTF-8 английская буква занимает 1 байт, а русская 2 байта.
strlen считает не буквы, а байты. Поэтому для кириллицы длина строки в
байтах не равна количеству символов
*/
