#include<stdio.h>
int main()
{
	printf("====================\n");
	printf("       welcome!     \n");
	printf("====================\n");
	return 0;
}

#include<stdio.h>
int main()
{
	printf("数字A1\n");
	return 0;
}

#include<stdio.h>
int main()
{
	printf("*\n");
	printf("* *\n");
	printf("* * *\n");
	printf("* * * *\n");
	return 0;
}

//计算两个整数的和
#include<stdio.h>
int main()
{
	int a, b, sum;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);
	return 0;
}

//简单多项式求值
#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d", &x);
	y = 2 * x * x + x + 8;
	printf("%d\n", y);
	return 0;
}

//美元与人民币的兑换
#include<stdio.h>
int main()
{
	double dollar, rmb;
	scanf("%lf", &dollar);
	rmb = 6.5573 * dollar;
	printf("%.2lf", rmb);
	return 0;
}

//求三角形面积
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, S;
	scanf("%lf%lf%lf", &a, &b, &c);
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.2lf\n", S);
	return 0;
}