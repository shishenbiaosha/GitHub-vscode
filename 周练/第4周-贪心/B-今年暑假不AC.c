#include<stdio.h>
int main()
{
    int n, i, j, count;
    int a[100], b[100];
    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
            break;
        for (i = 1; i <= n; i++)
            scanf("%d %d", &a[i], &b[i]);
        for(i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (b[j] > b[j + 1])
                {
                    int temp;
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }
        for (i = 1, j = 2, count = 1; j <= n; j++)
        {
            if(a[j] >=b[i])
            {
                i = j;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
