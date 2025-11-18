#include <stdio.h>

int add(double a, double b, double *result);
int sub(double a, double b, double *result);
int mul(double a, double b, double *result);
int div(double a, double b, double *result);

int main()
{
    int (*f[4])(double, double, double *) = {add, sub, mul, div};

    double a, b, result;
    int choice;
    printf("Enter two numbers:\n");
    scanf("%lf %lf", &a, &b);
    printf("Choose an operation:\n");
    printf("0: Add\n");
    printf("1: Subtract\n");
    printf("2: Multiply\n");
    printf("3: Divide\n");
    scanf("%d", &choice);

    if (choice < 0 || choice > 3)
    {
        printf("Invalid choice.\n");
        return 1;
    }

    if (!f[choice](a, b, &result))
    {
        printf("Result: %.2lf\n", result);
        return 0;
    }
    
    printf("Error in operation.\n");
    return 2;
}

int add(double a, double b, double *result)
{
    *result = a + b;
    return 0;
}

int sub(double a, double b, double *result)
{
    *result = a - b;
    return 0;
}

int mul(double a, double b, double *result)
{
    *result = a * b;
    return 0;
}

int div(double a, double b, double *result)
{
    if (b != 0)
    {
        *result = a / b;
        return 0;
    }
    return 1;
}