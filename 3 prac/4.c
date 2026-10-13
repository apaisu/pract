#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";

    printf("%s", s);
    printf("STRLEN: %zu\n", strlen(s));
    printf("SIZEOF: %zu\n", sizeof(s));

    return 0;
}

/*
Программа печатает строку, записанную кодами символов
