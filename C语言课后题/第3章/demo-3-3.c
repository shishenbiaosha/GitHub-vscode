#include<stdio.h>
int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 100) % 10;
    if (n == a * a * a + b * b * b + c * c * c)
        printf("yes");
    else
        printf("no");
    return 0;
}