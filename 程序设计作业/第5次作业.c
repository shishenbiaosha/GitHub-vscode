//利用函数实现三个整数的最大值求解
#include<stdio.h>
int MAX(int a, int b);
int max = 0;
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	MAX(a, b);
	MAX(a, c);
	MAX(b, c);
	printf("%d", max);
	return 0;
}
int MAX(int a, int b)
{
	if (a > b)
		max = a;
	else
		max = b;
	return max;
}

//利用函数 输出100以内的全部素数 每个素数占6列
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 2; i < 100; i++)
	{
		for (j = 2; j < 100; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j >= i)
			printf("%6d ", i);
	}
	return 0;
}

//调用阶乘函数求组合数
#include<stdio.h>
double jc(int n);
int main()
{
	double m, n, result;
	scanf("%lf%lf", &m, &n);
	result = jc(n) / (jc(m) * jc(n - m));
	printf("%lf", result);
	return 0;
}
double jc(int n)
{
	int i;
	double a = 1;
	for (i = 2; i <= n; i++)
	{
		a *= i;
	}
	return a;
}