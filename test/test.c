#include <stdio.h>

int main()
{
    int n, k, r;
    scanf("%d %d %d", &n, &k, &r);
    int arr[500];
    for(int i=0;i<n;i++)
    {
        arr[i] = i + 1;
    }
    int index = 0;
    for(int i = 0; i < n - 1; i++)
    {
        index = (index + k - 1) % (n - i);
        for(int j = index; j < n - i - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
    }
    int s;
    if(r < arr[0])
    {
        s = r + n - arr[0] + 1;
    }
    else
    {
        s = r - arr[0] + 1;
    }
    printf("%d\n", s);
    return 0;
}