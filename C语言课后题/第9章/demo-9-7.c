#include<stdio.h>
//数学思路来自网络
int monkey(int n, int m)
{
    if (n == 1)
        return 0;
    else
        return (monkey (n - 1 , m) + m) % n;
 
}
int main()
{
    int n, m;
    while(scanf("%d%d", &n, &m), m!=0, n!=0)
    {
        printf("%d\n", monkey(n, m) + 1);
    }
    return 0;
}