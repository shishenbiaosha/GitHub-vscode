#include<stdio.h>
int main()
{
    int n, i;
    double a = 1, b = 0;
    scanf("%d", &n);
    for (i = 1; i<= n; i++)
    {
        a = a * i;
        b = b + a;
    }
    printf("%lf", b);
    return 0;
}