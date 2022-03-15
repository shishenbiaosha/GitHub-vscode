#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    n /= 1000;
    printf("%02lld:%02lld:%02lld", n / 3600 % 24, n / 60 % 60, n % 60);
    return 0;
}