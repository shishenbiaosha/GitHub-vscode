#include<stdio.h>
int main()
{
    int i, sum = 0, ceng = 0;
    for(i = 1; i <= 100; i++)
    {
        ceng += i;
        sum += ceng;
    }
    printf("%d", sum);
    return 0;
}
