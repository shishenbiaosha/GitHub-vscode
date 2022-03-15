#include<stdio.h>
int main()
{
    int sum, i, j;
    for (i = 1; i <= 100; i++)//从第几岁开始过生日
    {
        sum = 0;
        for (j = i; j <= 100; j++)
        {
            sum += j;
            if(sum == 236)
                printf("%d", i);
        }
    }
    return 0;
}