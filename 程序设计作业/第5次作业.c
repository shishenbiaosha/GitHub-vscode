//���ú���ʵ���������������ֵ���
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

//���ú��� ���100���ڵ�ȫ������ ÿ������ռ6��
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

//���ý׳˺����������
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