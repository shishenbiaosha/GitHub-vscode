#include<stdio.h>
// int fun(int n)
// {
//     int a = 0;
//     while (n != 0)
//     {
//         a = a * 10 + n % 10;
//         n /= 10;
//     }
//     return a;
// }
void fun(int n)
{
    int a = 0;
    while (n > 0)
    {
        printf("%d", n % 10);
        n = n / 10;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}