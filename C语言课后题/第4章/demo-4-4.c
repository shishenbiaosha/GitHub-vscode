#include<stdio.h>
int main()
{
    int n, i, num;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if((i % 7 == 0 || i % 11 == 0) && i % 77 != 0)
            printf("%d ", i);
    }
    return 0;
}