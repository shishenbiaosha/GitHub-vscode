#include<stdio.h>
int main()
{
    int n, i, arr[10] = { 0 };
    int max, a;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0], a = 0;
    for (i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            a = i;
        }
    }
    printf("最大值为：%d\n对应下标为：%d\n", max, a);
    return 0;
}