#include<stdio.h>
int main()
{
    double N, num, max;
    scanf("%lf", &N);
    max = -1.00;
    for (int i = 1; i <= 12; i++)
    {
        scanf("%lf", &num);
        if (num > max)
            max = num;
    }
    printf("%.2lf", max * N);
    return 0;
}