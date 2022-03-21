#include<stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
int main()
{
    int T, n, i, l, r, last;
    scanf("%d", &T);
    while(T--)
    {
        last = 0;
        scanf("%d", &n);
        while(n--)
        {
            scanf("%d%d", &l, &r);
            if (MAX(last, l) > r)
                printf("0 ");
            else
            {
                printf("%d ", MAX(last, l));
                last = MAX(last, l) + 1;
            }
        }
        printf("\n");
    }
    return 0;
}