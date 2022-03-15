#include<stdio.h>
int main()
{
    int n, i, num, jige = 0, youxiu = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if(num >= 85)
        {
            youxiu++;
        }
        if(num >= 60)
        {
            jige++;
        }
    }
    printf("%.0f%%\n%.0f%%", jige / (n * 1.0) * 100, youxiu / (n * 1.0) * 100);
    return 0;
}