#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
    int n, i, num, min = INT_MAX;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if(fabs(num) < fabs(min))
             min = num;
    }
    printf("%d", min);
    return 0;
}