#include<stdio.h>
#define N 50
int main()
{
    int i, j, n, a[N][N],  max, row = 0, col = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &*(*(a + i) + j));
    max = **a;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (*(*(a + i) + j) > max)
            {
                max = *(*(a + i) + j);
                row = i;
                col = j;
            }
    printf("%d", *(*(a + row) + col));
    return 0;
}