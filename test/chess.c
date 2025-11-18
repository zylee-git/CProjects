#include <stdio.h>
void judge_winner(int board[10][10], int n, int x, int winner[]);

int main()
{
    int t, x;  // t: 棋盘个数, x: 获胜需要的连续棋子数
    scanf("%d %d", &t, &x);
    for(int i=0;i<t;i++)
    {
        int n;  // n: 棋盘大小
        scanf("%d", &n);
        int board[10][10];
        for(int j=0;j<n;j++)  // 输入棋盘信息, 1, 2, 4表示三种棋子, 0表示空格
        {
            for(int k=0;k<n;k++)
            {
                scanf("%d", &board[j][k]);
            }
        }
        int winner[3] = {0, 0, 0};  // winner[0]: 玩家1获胜, winner[1]: 玩家2获胜, winner[2]: 玩家4获胜
        judge_winner(board, n, x, winner);
        if(winner[0] + winner[1] + winner[2] > 1)
            printf("Draw\n");
        else if(winner[0] == 1)
            printf("1\n");
        else if(winner[1] == 1)
            printf("2\n");
        else if(winner[2] == 1)
            printf("4\n");
        else
            printf("Draw\n");
    }
}

void judge_winner(int board[10][10], int n, int x, int winner[])
{
    // 检查行
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-x;j++)
        {
            int piece = board[i][j];
            if(piece == 0) continue;
            int count = 1;
            for(int k=1;k<x;k++)
            {
                if(board[i][j+k] == piece)
                    count++;
                else
                    break;
            }
            if(count == x)
            {
                winner[piece == 1 ? 0 : piece == 2 ? 1 : 2] = 1;
            }
        }
    }

    // 检查列
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<=n-x;i++)
        {
            int piece = board[i][j];
            if(piece == 0) continue;
            int count = 1;
            for(int k=1;k<x;k++)
            {
                if(board[i+k][j] == piece)
                    count++;
                else
                    break;
            }
            if(count == x)
            {
                winner[piece == 1 ? 0 : piece == 2 ? 1 : 2] = 1;
            }
        }
    }

    // 检查主对角线
    for(int i=0;i<=n-x;i++)
    {
        for(int j=0;j<=n-x;j++)
        {
            int piece = board[i][j];
            if(piece == 0) continue;
            int count = 1;
            for(int k=1;k<x;k++)
            {
                if(board[i+k][j+k] == piece)
                    count++;
                else
                    break;
            }
            if(count == x)
            {
                winner[piece == 1 ? 0 : piece == 2 ? 1 : 2] = 1;
            }
        }
    }

    // 检查副对角线
    for(int i=0;i<=n-x;i++)
    {
        for(int j=x-1;j<n;j++)
        {
            int piece = board[i][j];
            if(piece == 0) continue;
            int count = 1;
            for(int k=1;k<x;k++)
            {
                if(board[i+k][j-k] == piece)
                    count++;
                else
                    break;
            }
            if(count == x)
            {
                winner[piece == 1 ? 0 : piece == 2 ? 1 : 2] = 1;
            }
        }
    }
}