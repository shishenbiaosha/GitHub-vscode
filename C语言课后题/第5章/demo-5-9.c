#include<stdio.h>
int nx(int n)
{
    if(n == 0)
        return 0;
    else
    {
        printf("%d", n % 10);
        nx(n / 10);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    nx(n);
    return 0;
}