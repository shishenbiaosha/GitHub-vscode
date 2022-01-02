#include<stdio.h>
#include<math.h>
double f(double x, int n)
{
    double result = 0;
    if (n == 1)
        result = x;
    else
        result += pow(x, n) * pow(-1, n - 1) + f(x, n - 1);
    return result;

}
int main()
{
    int n;
    double x;
    scanf("%lf%d", &x, &n);
    printf("%lf", f(x, n));
    return 0;
}