#include<stdio.h>
int gcd(int a, int b)
{
    int r;
    while (r = a % b, r != 0)
    {
        a = b;
        b = r;
    }
    return b;
}
int main()
{
    int a, b;
    char op;
    scanf("%d%c%d", &a, &op, &b);
    printf("%d%c%d", a / gcd(a, b), op, b / gcd(a, b));
    return 0;
}