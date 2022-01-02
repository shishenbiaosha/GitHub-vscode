#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, j;
    int T;
    scanf("%d", &T);
    for (j = 1; j <= T; j++)
    {
        scanf("%d", &n);
        for (i = 2; i <= sqrt(n + 1); i++)
        {
        if (n % i == 0)
            break;
        }
        if (i <= sqrt(n + 1) || n == 1)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}