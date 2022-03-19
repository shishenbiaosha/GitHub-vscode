#include<stdio.h>
int main()
{
    int T, n, i, j, k, num;
    int s[55] = {0};
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &n);
        for (j = 0; j < n; j++)
            scanf("%d", &s[j]);
        num = 0;
        for (j = 0; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if(s[j] == s[k])
                {
                    s[j] = -1;
                }
            }
        }
        for (j = 0; j < n; j++)
            if(s[j] != -1)
                num++;
        printf("%d\n", num);
        for (j = 0; j < n; j++)
        {
            if(s[j] != -1)
                printf("%d ", s[j]);
        }
        printf("\n");
    }
    return 0;
}