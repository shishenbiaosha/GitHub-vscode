//�����ݹ� ��������1234 ���1 2 3 4 
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		//�����Լ������Լ�-�����ݹ�
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

//���õ�����ѭ������n�Ľ׳�
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

//���ú����ݹ���n�Ľ׳�
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
	result = Fac(n); //n > 1ʱ n! = n * (n - 1)!; n <= 1ʱ�� n! = 1
	printf("%d", result);
	return 0;
}

//���õݹ����n��쳲�������
#include<stdio.h>
int count;//���������ﲻ��ʹ�þֲ�������ֻ��ʹ��ȫ�ֱ����Ҳ��ø���ֵ
//�ݹ���Խ��������Ч��̫��
int Fib(int i)
{
	//ͳ�Ƶ�����쳲������������˶��ٴ�
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

//���ú������n��쳲�������
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
		n--;//��ֹ��ѭ��
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

//����������ǰn��쳲�������
#include<stdio.h>
#define N 50
int main()
{
	int Fib[N];
	int n, i;
	printf("����������n(1 < n <= 46)��");
	scanf("%d", &n);
	Fib[0] = 1;
	Fib[1] = 1;
	for (i = 2; i < n; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
	}
	printf("쳲���������\n");
	for (i = 0; i < n; i++)
		printf("%d\n", Fib[i]);
	printf("\n");
	return 0;
}