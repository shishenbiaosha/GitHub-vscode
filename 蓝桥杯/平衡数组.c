#include<stdio.h>
int main()
{
    int T, i, j, n;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &n);
        printf("%d\n",n);
        for (j = 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}