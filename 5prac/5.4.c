#include <stdio.h>

#define SIZE 8

int main(void) {
    double arr[SIZE];
    double cum[SIZE];

    arr[0] = 1.0;
    arr[1] = 1.0;
    arr[2] = 1.0;
    for (int i = 3; i < SIZE; i++) {
        arr[i] = arr[i - 2] + arr[i - 3];
    }

    double total = 0.0;
    for (int i = 0; i < SIZE; i++) {
        total += arr[i];
        cum[i] = total;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", cum[i]);
    }
    printf("\n");

    return 0;
}
//Программа строит первые 8 чисел Падована и их кумулятивную сумму