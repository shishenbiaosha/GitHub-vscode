#include<stdio.h>
#define N 50
int main()
{
    int n, i, num, a[N] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        a[num]++;
    }
    for (i = 0; i < N; i++)
    {
        if (a[i] > 0)
            printf("%d ", i);
    }
    return 0;
}