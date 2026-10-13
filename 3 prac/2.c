#include <stdio.h>
#include <string.h>

int main(void) {
    char word1[15];
    char word2[15];

    scanf("%14s %14s", word1, word2);

    printf("%s-%s\n", word1, word2);
    printf("TOTAL_LEN: %zu\n", strlen(word1) + strlen(word2));

    return 0;
}

/*
Программа читает два слова и печатает их через дефис

scanf с %s останавливается на пробеле (а также на табуляции и переходе на новую строку). Для scanf пробел означает "слово закончилось"

Как это влияет на ввод: если ввести "Hello big World", первое слово попадёт в word1, второе в word2, а "World" останется непрочитанным. Целую строку с пробелами через %s не прочитать
*/
