#include <stdio.h>

int main(void) {
    char c;

    scanf(" %c", &c);

    printf("CODE_DEC: %d\n", c);
    printf("CODE_HEX: %x\n", c);
    printf("CODE_OCT: %o\n", c);
    printf("UPPER: %c\n", (char)(c - 'a' + 'A'));
    printf("NEXT: %c\n", (char)(c + 1));
    printf("PREV: %c\n", (char)(c - 1));

    return 0;
}

/*
Программа показывает, что символ - это просто число (код по таблице ASCII), с которым можно считать
