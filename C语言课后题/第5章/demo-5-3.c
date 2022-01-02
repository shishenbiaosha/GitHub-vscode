#include<stdio.h>
int flower(int num);
int main()
{
    int m, n, i;
    for (i = 1; i <= 999; i++)
    {
        if (flower(i) == 1 && i != 1)
            printf("%d ", i);
    }
    return 0;
}
    
int flower(int num)
{
    int a, b, c;
    a = num % 10;
    b = (num / 10) % 10;
    c = (num / 100) % 10;
    if (num == a * a * a + b * b * b + c * c * c)
        return 1;
    else
        return 0;
}