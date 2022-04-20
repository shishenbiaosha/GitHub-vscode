#include<stdio.h>
int F(int n, int m)
{
    if (m == 1)
        return 1;
    if (m == n)
        return 1;
    else
    {
        return F(n - 1, m - 1) + m * F(n - 1, m);
    }
}

int main()
{
    int sum = 0;
    int n = 5;
    for (int i = 1; i <= n; i++)
        sum += F(n, i);
    printf("%d\n", sum);
}