#include<stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
int main()
{
    double n, k;
    double a[100000];
    double sum[100000];
    double maxn = -1;
    scanf("%lf%lf", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lf", &a[i]);
        sum[i] = sum[i - 1] + a[i];
    }
    for (int i = 1; i <= n - k + 1; i++)
    {
        for (int j = i + k - 1; j <= n; j++)
        {
            double temp = (sum[j] - sum[i - 1]) / (j - i + 1);
            maxn = MAX(maxn, temp);
        }
    }
    printf("%.15lf", maxn);
    return 0;
}