#include<stdio.h>
int flower(int num);
int main()
{
    int m, n, i, flag = 0, f = 0;
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++)
    {
        if (flower(i) == 1)
        {
            if (f == 0)
            {
                printf("%d", i);
                flag = 1;
            }
            else
            {
                printf(" %d", i);
                flag = 1;
            }
            f = 1;
        }
    }
    if (flag == 0)
        printf("no\n");
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