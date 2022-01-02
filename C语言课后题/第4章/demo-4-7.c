#include<stdio.h>
int main()
{
    int flag;
    double x, result = 0.0, b = 1.0, i;
    scanf("%lf", &x);
    flag = 1;
    double a = x;
    for (i = 1; i <= 20; i++)
    {
        result += flag * a / b;
        flag = -flag;
        a = a * x * x;
        b = b * (2 * i) * (2 * i + 1);
    }
    printf("%.3lf", result);
    return 0;
}