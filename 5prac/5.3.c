#include <stdio.h>

int main(void) {
    int n;

    printf("Введите N (N <= 0 для выхода): ");
    while (scanf("%d", &n) == 1 && n > 0) {
        double sum = 0.0;

        for (int i = 1; i <= n; i++) {
            sum += 1.0 / (2.0 * i * (2.0 * i - 1.0));
        }

        printf("SUM: %.6f\n", sum);
        printf("Введите N (N <= 0 для выхода): ");
    }

    return 0;
}
//Программа считает частичную сумму ряда: 1/(2*1*1) + 1/(2*2*3) + ... до N-го члена