#include<stdio.h>
int main()
{
    int n, i, num;
    int x = 0, y = 0;//x代表奇数，y代表偶数 
    scanf("%d", &n);
    for(i = 0; i< n; i++)
    {
        scanf("%d", &num);
        if(num % 2 == 0)
            y++;
        else
            x++;
    }
    if (n == 1)
        printf("1");
    else if(x % 2 == 0)
            printf("%d", y);
        else
            printf("%d", x);
    return 0;
}