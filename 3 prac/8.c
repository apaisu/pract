#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    const char s1[] = "Сбой матрицы";
    const wchar_t s2[] = L"Сбой матрицы";

    printf("char -> sizeof: %zu bytes, strlen: %zu chars\n",
           sizeof(s1), strlen(s1));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n",
           sizeof(s2), wcslen(s2));

    return 0;
}