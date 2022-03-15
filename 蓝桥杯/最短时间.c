#include<stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
int main()
{
    int T, n, m, r, c, i;
    scanf("%d", &T);
    for(i = 0; i < T; i++)
    {
        scanf("%d%d%d%d", &n, &m, &r, &c);
        printf("%d\n", MAX(r - 1, n - r) + MAX(c - 1, m - c));
    }
    return 0;
}