#include<stdio.h>
int main()
{
    int T, n, d, i, j, flag;
    int s[100001] = {0};
    scanf("%d", &T);
    while(T--)
    {
        flag = 1;
        scanf("%d%d", &n, &d);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &s[i]);
            if(s[i] > d)
                flag = 0;
        }
        if(flag)
        {
            printf("YES\n");
            continue;
        }
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if(s[j] > s[j + 1])
                {
                    int temp;
                    temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                }
            }
        }
        if(s[1] + s[2] > d && s[n] >d)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}