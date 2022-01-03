#include<stdio.h>
#include<stdlib.h>
//没学过， 循环左移函数来自网络并改编
void xhzy(int *p, int n, int i)
{
    int temp;
    temp = *p >> (n - i);
    *p = *p << i;
    *p = *p | temp;
}
int main()
{
    int n, i, *p, k;
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", p + i);
    scanf("%d", &k);
    xhzy(p, n, k);
    for (i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
}