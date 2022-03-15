#include<stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
int main()
{
    int n, m, i;
    int num1, num2, x = -1, y = -1;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num1);
        x = MAX(num1, x);	
    }
    scanf("%d", &m);
    for(i = 0; i < m; i++)
    {
        scanf("%d", &num2);
        y = MAX(num2, y);		
    }
    printf("%d %d", x, y);
    return 0;	
}