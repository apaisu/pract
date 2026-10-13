#include <stdio.h>
#include <stdint.h>

int main(void) {
    int input;
    scanf("%d", &input);
    uint8_t r = (uint8_t)input;

    uint8_t add  = r + r;
    uint8_t mul2 = r * 2;
    uint8_t sqr  = r * r;

    printf("ADD: %u\n",  (unsigned)add);
    printf("MUL2: %u\n", (unsigned)mul2);
    printf("SQR: %u\n",  (unsigned)sqr);
    
    return 0;
}