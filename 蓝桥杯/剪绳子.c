#include<stdio.h>
int n, m;
int a[100005];
int check(double len)
{
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        result += a[i] / len;
        if(result >= m)
        return 1;
    }
    return 0;
}

int main()
{
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    double left = 0, right = 1e9;
    while(right - left > 1e-3)
    {
        double mid = left + (right - left) / 2;
        if(check(mid))
            left = mid;
        else
            right = mid;
    }
    printf("%.2lf", left);
    return 0;
} 
