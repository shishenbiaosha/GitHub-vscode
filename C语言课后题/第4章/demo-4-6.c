#include<stdio.h>
int main()
{
    int n, flag;
    double result = 0, i;
    scanf("%d", &n);
    flag = 1;
    for (i = 1; i <= n; i++)
    {
        result += flag * i / (2 * i - 1);
        flag = -flag;
    }
    printf("%.3lf", result);
    return 0;
}