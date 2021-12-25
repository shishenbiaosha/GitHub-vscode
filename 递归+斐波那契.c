//函数递归 输入整数1234 输出1 2 3 4 
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		//函数自己调用自己-函数递归
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int num;
	scanf("%d", &num);
	print(num);
	return 0;
}

//利用迭代（循环）求n的阶乘
#include<stdio.h>
int main()
{
	int n, i, result;
	scanf("%d", &n);
	result = 1;
	for (i = 1; i <= n; i++)
	{
		result *= i;
	}
	printf("%d", result);
	return 0;
}

//利用函数递归求n的阶乘
#include<stdio.h>
int Fac(int i)
{
	if (i <= 1)
		return 1;
	else
		return(i * Fac(i - 1));
}
int main()
{
	int n, result;
	scanf("%d", &n);
	result = Fac(n); //n > 1时 n! = n * (n - 1)!; n <= 1时， n! = 1
	printf("%d", result);
	return 0;
}

//利用递归求第n个斐波那契数
#include<stdio.h>
int count;//经测试这里不能使用局部变量，只能使用全局变量且不用赋初值
//递归可以解决，但是效率太低
int Fib(int i)
{
	//统计第三个斐波那契数被算了多少次
	if (i == 3)
		count++;
	if (i <= 2)
		return 1;
	else
		return(Fib(i - 1) + Fib(i - 2));
}
int main()
{
	int n, result;
	scanf("%d", &n);
	result = Fib(n);
	printf("%d\n", result);
	printf("count = %d\n", count);
	return 0;
}

//利用函数求第n个斐波那契数
#include<stdio.h>
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;//防止死循环
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int result = Fib(n);
	printf("%d", result);
	return 0;
}

//利用数组求前n个斐波那契数
#include<stdio.h>
#define N 50
int main()
{
	int Fib[N];
	int n, i;
	printf("请输入整数n(1 < n <= 46)：");
	scanf("%d", &n);
	Fib[0] = 1;
	Fib[1] = 1;
	for (i = 2; i < n; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
	}
	printf("斐波那契数：\n");
	for (i = 0; i < n; i++)
		printf("%d\n", Fib[i]);
	printf("\n");
	return 0;
}