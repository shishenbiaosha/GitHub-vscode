#include<stdio.h>
int main()
{
    double score, max;
    max = 0;
    while (scanf("%lf", &score), score >= 0)
    {
        if (score > max)
        {
            max = score;
        }
    }
    printf("%.1lf", max);
    return 0;
}