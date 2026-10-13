#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wchar_t a[50], b[50], c[50];

    wscanf(L"%49ls %49ls %49ls", a, b, c);
    wprintf(L"%-15ls|%20ls|%.5ls\n", a, b, c);

    return 0;
}

/*
Программа читает три названия модулей и печатает строку телеметрии из трёх полей, разделённых вертикальной чертой
*/
