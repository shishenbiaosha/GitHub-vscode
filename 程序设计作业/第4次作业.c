//��while���ʵ��10�������
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
	printf("�ۼӺ�=%lf\n", sum);
	return 0;
}

//��for���ʵ��10�������
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
	printf("�ۼӺ�=%lf\n", sum);
	return 0;
}