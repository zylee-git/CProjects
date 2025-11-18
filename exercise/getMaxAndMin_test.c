#include "getMaxAndMin.h"
#include <stdio.h>

int main() {
    int arr[] = {3, 5, 1, 8, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    GetMaxAndMin(arr, len, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}