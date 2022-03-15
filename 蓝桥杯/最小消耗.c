#include<stdio.h>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
int main()
{
    int n, i, j, a, b, c, T, sum;
    char s[1000] = { 0 };
    scanf("%d", &T);
    for(i = 0; i < T; i++)
    {
        sum = 0;
        scanf("%d%d%d%d", &n, &a, &b,&c);
        scanf("%s", &s[0]);
        for (j = 0; j < n; j++)
        {
            if (s[j] == '0')
                sum += MIN(a, b + c);
            else
                sum += MIN(b, a + c);
        }
        printf("%d\n", sum);
    }
    return 0;
}