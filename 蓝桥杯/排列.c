#include<stdio.h>
int main()
{
    int T, n, i, j;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &n);
        for (j = 2; j <= n; j++)
            printf("%d ", j);
        printf("1 \n");
    }
    return 0;
}
