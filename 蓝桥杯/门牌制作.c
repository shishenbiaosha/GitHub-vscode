#include<stdio.h>
int main()
{
    int i, sum = 0, temp;
    for (i = 1; i <= 2020; i++)
    {
        temp = i;
        while(temp)
        {
            if(temp % 10 == 2)
                sum++;
            temp /= 10;
        }
    }
    printf("%d", sum);
    return 0;
}