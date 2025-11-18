#include "swap.h"
#include <stdio.h>

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);   
    printf("After swap: x = %d, y = %d\n", x, y);

    long long a = 1, b = 2;
    printf("Before SWAP: a = %d, b = %d\n", a, b);
    SWAP(&a, &b, sizeof(a));
    printf("After SWAP: a = %d, b = %d\n", a, b);
    return 0;
}