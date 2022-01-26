#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, m, n, **a;
    scanf("%d%d", &m, &n);
    a = (int **) malloc(sizeof(int *) * m);
    for (i = 0; i < m; i++)
        a[i] = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < m; i++)
        free(a[i]);
    free(a);
    return 0;
}