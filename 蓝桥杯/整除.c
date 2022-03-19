#include<stdio.h>
int main()
{
    int T, a, b, i;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d%d", &a, &b);
        if(a % b == 0)
            printf("0\n");
        else if(a % b != 0)
            printf("%d\n", (b - a % b) % b);
    }
    return 0;
}