#include <stdio.h>

struct Bell
{
    int seq;    // 序号
    int water;  // 剩余水枪，初始为b
    int tails;  // 剩余尾巴，初始为l
};

int main()
{
    int n, k, b, l;
    scanf("%d %d %d %d", &n, &k, &b, &l);
    struct Bell bell[n];
    for(int i = 0; i < n; i++)  // 初始化
    {
        bell[i].seq = i + 1;
        bell[i].tails = l;
    }
    int idx = 0;
    int alive = n;  // 当前未淘汰的数量
    int water = b;  // 当前水枪装填数
    while (1)
    {
        idx = (idx + k - 1) % alive;
        if (water)
        {
            water--;
            bell[idx].tails--;
            if (bell[idx].tails == 0)
            {
                for (int i = idx; i < alive; i++) bell[i] = bell[i+1];  // 淘汰
                alive--;
            }
        }
        else water = b;
        if (alive == 1) break;
    }
    printf("%d\n", bell[0].seq);
}
