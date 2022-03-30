#include<stdio.h>

int main()
{
    char s1[100005];
    char s2[100005];
    int sum[100005];
    int len1, len2, t;
    scanf("%d%d%d", &len1, &len2, &t);
    scanf("%s", s1 + 1);
    scanf("%s", s2 + 1);
    for (int i = len2; i <= len1; i++)
    {
        int f = 1;
        int cnt = len2;
        for (int j = i; j >= i - len2 + 1; j--)
        {
            if(s2[cnt--] != s1[j])
                f = 0;
        }
        sum[i] = sum[i - 1] + f;
    }
    while (t--)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        if (r - l + 1 < len2)
        {
            printf("0\n");
        }
        else{
            printf("%d\n", sum[r] - sum[l + len2 - 2]);
        }
    }
    return 0;
}