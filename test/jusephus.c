#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[500];
    for(int i = 0; i < n; i++)
        arr[i] = i + 1;
    int index = 0;
    for(int i = 0; i < n - 1; i++)
    {
        index = (index + k - 1) % (n - i);
        for(int j = index; j < n - i - 1; j++)
            arr[j] = arr[j + 1];
    }
    printf("%d\n", arr[0]);
}