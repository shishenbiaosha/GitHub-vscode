#include<stdio.h>
void max_min(int a[], int n, int* pmax, int* pmin)
{
    int i;
    *pmax = a[0], * pmin = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] >= *pmax)
            *pmax = a[i];
        else if(a[i] < *pmin)
            *pmin = a[i];
    }
}
int main()
{
    int max, min;
    int a[50], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max_min(a, n, &max, &min);
    printf("%d %d", max, min);
    return 0;
}