#include<stdio.h>
int main()
{
    int n, i;
    double score, count = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%lf", &score);
        if (score < 60)
            count++;
    }
    printf("%.2lf", count / n);
    return 0;
}