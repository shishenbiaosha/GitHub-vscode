//用while语句实现10个数求和
#include<stdio.h>
int main()
{
	int i = 1;
	double sum = 0, number;
	while (i <= 10)
	{
		scanf("%lf", &number);
		sum += number;
		i++;
	}
	printf("累加和=%lf\n", sum);
	return 0;
}

//用for语句实现10个数求和
#include<stdio.h>
int main()
{
	int i;
	double sum = 0, number;
	for (i = 1; i <= 10; i++)
	{
		scanf("%lf", &number);
		sum += number;
	}
	printf("累加和=%lf\n", sum);
	return 0;
}