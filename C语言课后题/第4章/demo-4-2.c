#include<stdio.h>
int main()
{
    int n, i, num;
    int a = 0, b = 0, c = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num < 0)
            a++;
        else if (num == 0)
            b++;
        else if (num > 0)
            c++;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}