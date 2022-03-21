#include<stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
const int N = 5010;
int main()
{
    int N, R, i, j;
    int s[N][N];
    scanf("%d%d", &N, &R);
    R = MIN(R, 5010);
    for (i = 0; i < N; i++)
    {
        int x, y, w;
        scanf("%d%d%d", &x, &y, &w);
        x++, y++;
        s[x][y] += w;
    }
    for (i = 1; i <= 5010; i++)
        for (j = 1; j <= 5010; j++)
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
    int res = 0;
    for (i = R; i <= 5010; i++)
        for (j = R; j <= 5010; j++)
            res = MAX(res, s[i][j] - s[i - R][j] - s[i][j - R] + s[i - R][j - R]);
    printf("%d\n", res);
    return 0;
}