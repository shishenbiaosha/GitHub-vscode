#include<stdio.h>
int main()
{
    int flag = 1, n, i;
    double j = 1, result = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        result =result + flag / j;
        j = j + 3;
        flag = -flag;
    }
    printf("%.3lf", result);
    return 0;
}