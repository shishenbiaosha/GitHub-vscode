#include<stdio.h>
int main()
{
    int arr[5] = { 0 }, i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum / 5);
    return 0;
}