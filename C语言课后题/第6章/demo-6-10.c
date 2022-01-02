#include<stdio.h>
#define N 15
int main()
{
    int a[N][N] = { 0 }, i, j, n;
    scanf("%d", &n);
    a[0][0] = a[1][0] = a[1][1] = 1;
    for (i = 2; i < n; i++)
    {
        a[i][0] = a[i][i] = 1;
        for (j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%-4d", a[i][j]);
        printf("\n");
    }
    return 0;
}