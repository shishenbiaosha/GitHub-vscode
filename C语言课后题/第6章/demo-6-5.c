#include<stdio.h>
#include<limits.h>
#define N 500
int ModeOfArr(int a[], int n)
{
    int i, b[N] = { 0 }, max = INT_MIN, c = 0, result = 0;
    for (i = 0; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
        b[a[i]]++;
    }
    for (i = 0; i < N; i++)
    {
        if(b[i] > c)
        {
            c = b[i];
            result = i;
        }
    }
    printf("%d", result);
}
