#include<stdio.h>
int main()
{
    int a, b, r;
    scanf("%d %d", &a, &b);
    while (r = a % b, r != 0)
    {
        a = b;
        b = r;
    }
        printf("%d", b);
    return 0;
}
