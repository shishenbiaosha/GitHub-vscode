#include<stdio.h>
void imax(int *a, int n, int* pmax)
{
    int i;
    *pmax = *a;
    for (i = 0; i < n; i++)
    {
        if (*(a + i) >= *pmax)
            *pmax = *(a + i);
    }
}
int main()
{
    int max;
    int *a, n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    imax(a, n, &max);
    printf("%d", max);
    return 0;
}