#include<stdio.h>
int main()
{
    int n, i;
    double a = 1, b = 0;
    scanf("%d", &n);
    for (i = 1; ; i++)
    {
        a = a * i;
        b = b + a;
        if (b >= n)
        {
            printf("m<=%d", i - 1);
            break;
        }
    }
    return 0;
}