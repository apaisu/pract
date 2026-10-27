#include <stdio.h>
#include <math.h>

double calc(double a, double b) {
    return log(a * b) / (a + b);
}

int main(void) {
    double a, b;

    printf("Введите пару чисел a и b (нечисло для выхода): ");
    while (scanf("%lf %lf", &a, &b) == 2) {
        printf("%.4f\n", calc(a, b));
        printf("Введите пару чисел a и b (нечисло для выхода): ");
    }

    return 0;
}
//Программа считает ln(a*b) / (a+b) для пар чисел, пока вводятся числа