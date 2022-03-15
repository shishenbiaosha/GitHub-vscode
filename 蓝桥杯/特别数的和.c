#include<stdio.h>
int main()
{
    int i, n, temp, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int flag = 1;
        temp = i;
        while (temp)
        {
            if(temp % 10 == 2 || temp % 10 == 0 || temp % 10 == 1 || temp % 10 == 9)
            {
                if(flag == 1)
                {
                    sum += i;
                    flag = 0;   //用break可以替代flag
                }
            }
            temp /= 10;
        }
    }
    printf("%d", sum);
    return 0;
}