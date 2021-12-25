//实现正弦函数
#include<stdio.h>
int main()
{
	double x, res, a = 1, b = 1, i, sum = 0;
	int flag = 1;
	scanf("%lf", &x);
	for (i = 1; i <= 10; i++)
	{
		sum += flag * a / b;
		a = a * x * x;
		b = b * (2 * i) * (2 * i + 1);
		flag = -flag;
	}
	printf("%.3lf", sum);
	return 0;
}

//素数判定
#include<stdio.h>
int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			break;
	}
	if (i >= n)
		printf("yes");
	else
		printf("no");
	return 0;
}

//求解最大公约数
#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	while (n >= 1)
	{
		int temp;
		temp = m;
		m = n;
		n = temp % n;
	}
	printf("%d", m);
	return 0;
}

//求素数
#include<stdio.h>
int prime(int n);
int main()
{
	int m, n, i;
	scanf("%d%d", &m, &n);
	for (i = m; i <= n; i++)
	{
		if (prime(i) == 0)
			continue;
		else
			printf("%d ", i);
	}
	return 0;
}
int prime(int n)
{
	int a;
	for (a = 2; a < n; a++)
	{
		if (n % a == 0)
			break;
	}
	if (a >= n)
		return 1;
	else
		return 0;
}

//元音统计
#include<stdio.h>
int count = 0;
int vowel(char ch);
int main()
{
	char ch;
	
	while (scanf("%c", &ch) && ch != '\n')
	{
		if (vowel(ch) == 1)
		{
			count += vowel(ch);
		}
		else
			continue;
	}
	printf("%d\n", count);
	return 0;
}
int vowel(char ch)
{
	if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
		return 1;
	else
		return 0;
}

//分解质因子
#include<stdio.h>
int main()
{
	int m, i;
	scanf("%d", &m);
	for (i = 2; i <= m; i++)
	{
		if (m % i == 0)
		{
			m = m / i;
			printf("%d ", i);
			i = 1;
		}
	}
	return 0;
}

//输出自定义两数之间的水仙花数    
//有问题未解决
#include<stdio.h>
int flower(int num);
int main()
{
	int m, n, i;
	scanf("%d%d", &m, &n);
	for (i = m; i <= n; i++)
	{
		//if (flower(i) == 0)
		//{
		//	printf("No");
		//	break;
		//}
		if (flower(i) == 1)
		{
			printf("%d ", i);
		}

	}
	return 0;
}
int flower(int num)
{
	int a, b, c;
	a = num % 10;
	b = (num / 10) % 10;
	c = (num / 100) % 10;
	if (num == a * a * a + b * b * b + c * c * c)
		return 1;
	else
		return 0;
}

//调用函数画图
//copy
#include <stdio.h>
void printblank(int i, int n);
void printstar(int n);
int main()
{
    int n, j, temp, i;
    scanf("%d", &n);
    for (i = 1, j = 1; i <= n, j <= 2 * n; i++, j += 2)
    {
        printblank(i, n);
        printstar(j);
    }

    return 0;
}
void printblank(int i, int n)
{
    int temp = n - i;
    while (temp--)
    {
        printf("   ");
    }
}
void printstar(int i)
{
    while (i--)
    {
        printf("*  ");
    }
    printf("\n");
}
