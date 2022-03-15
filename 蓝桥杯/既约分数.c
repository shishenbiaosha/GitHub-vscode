#include<stdio.h>
int gy(int m, int n)
{
    while (n > 0)
    {
        int t;
        t = m;
        m = n;
        n = t % n;
    }
    return m;
}
int main()
{
    int fz, fm, sum = 0;
    for (fz = 1; fz <= 2020; fz++)
    {
        for (fm = 1; fm <= 2020; fm++)
        {
            if(gy(fz, fm) == 1)
                sum++;
        }
    }
    printf("%d", sum);
    return 0;
}