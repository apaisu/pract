#include <stdio.h>
#include <math.h>

int main(void) {
    const double A = 1.0;
    const double B = 10.0;
    const double H = 1.0;
    const double EPS = 1e-9;

    int n = 1;
    for (double x = A; x <= B + EPS; x += H) {
        double y = 1.0 / sqrt(x);
        printf("%d\t%.4f\t%.4f\n", n, x, y);
        n++;
    }

    return 0;
}
//Программа печатает таблицу: номер шага, X и Y = 1/корень из X