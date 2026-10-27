#include <stdio.h>

#define HEIGHT 5

int main(void) {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < HEIGHT; j++) {
            if (j == i || j == HEIGHT - 1 - i) {
                printf("x");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
//Программа рисует две диагонали квадрата 5x5, то есть крест из символов x