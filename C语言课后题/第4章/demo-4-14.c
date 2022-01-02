#include<stdio.h>
#include<math.h>
int main()
{
    int s, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s += pow(i, i);
    }
    printf("%d", s);
    return 0;
}