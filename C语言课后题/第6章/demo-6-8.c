#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n][n];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            a[i][j] = i * n + j + 1;
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%-4d",a[j][i]);
        printf("\n");
    }
    return 0;
}