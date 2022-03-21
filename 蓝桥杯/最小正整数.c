#include<stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    while(t--)
    {
        long long n, k, l = 1;
        scanf("%lld%lld", &n, &k);
        for (i = 1; i <= k; i++)
            l = l * 10;
        for (i = 1; i <= k && n % 2 == 0; i++)
            n = n / 2;
        for (i = 1; i <= k && n % 5 == 0; i++)
            n = n / 5;
        printf("%lld\n", n*l);
    }
    return 0;
}