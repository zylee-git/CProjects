#include <stdio.h>

int main()
{
    const char *str[4] = {
        "Hello, World!",
        "C programming is fun.",
        "Pointers are powerful.",
        "Function pointers are useful."
    };
    printf("String 1: %s\n", str[0]);
    printf("String 2: %s\n", str[1]);
    printf("String 3: %s\n", str[2]);
    printf("String 4: %s\n", str[3]);

    return 0;
}