#include<stdio.h>
int main()
{
    int number, sum;
    int i, n;
    sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n;i++)
    {
        scanf("%d", &number);
        sum = sum + number;
    }
    printf("%d", sum);
    return 0;
}
