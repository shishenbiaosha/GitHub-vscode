#include<stdio.h>
struct ST
{
    int p;
    int a;
}num[6000];
int main()
{
    int n, m;
    int i, j;
    struct ST t;
    int sum = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++)
        scanf("%d %d", &num[i].p, &num[i].a);
    for (i = 0; i < m - 1; i++)
    {
        for (j = 0; j < m - i - 1; j++)
        {
            if (num[j].p > num[j + 1].p)
            {
                t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        if (n - num[i].a <= 0)
            break;
        n = n - num[i].a;
    }
    for (j = 0; j < i; j++)
    {
        sum = num[j].a * num[j].p + sum;
    }
    sum = num[i].p * n + sum;
    printf("%d", sum);
    return 0;
}