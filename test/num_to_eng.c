#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    char* units[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char* teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char* tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    if(num < 0 || num > 999)
    {
        printf("Number out of range\n");
        return 1;
    }
    else if(num < 10)
    {
        printf("%s\n", units[num]);
    }
    else if(num < 20)
    {
        printf("%s\n", teens[num - 10]);
    }
    else if(num < 100)
    {
        printf("%s", tens[num / 10]);
        if(num % 10 != 0)
            printf("-%s", units[num % 10]);
        printf("\n");
    }
    else
    {
        printf("%s hundred", units[num / 100]);
        if(num % 100 != 0)
        {
            printf(" and ");
            if((num % 100) < 10)
            {
                printf("%s\n", units[num % 10]);
            }
            else if((num % 100) < 20)
            {
                printf("%s\n", teens[(num % 100) - 10]);
            }
            else
            {
                printf("%s", tens[(num % 100) / 10]);
                if(num % 10 != 0)
                    printf("-%s", units[num % 10]);
                printf("\n");
            }
        }
        else
        {
            printf("\n");
        }
    }
}