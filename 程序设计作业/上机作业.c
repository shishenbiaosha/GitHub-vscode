#include<stdio.h>
int main()
{
	int a, b, sum;
	scanf("%d%d", &a, &b);
	sum = a + b;//����������������ͼ���
	printf("���������ĺ�=%d\n", sum);
	return 0;
}

#include<stdio.h>
int main()
{
	double a, b, average;
	scanf("%lf%lf", &a, &b);
	average = (a + b) / 2;//��������ʵ����ƽ��ֵ������
	printf("����������ƽ��ֵ=%lf\n", average);
	return 0;
}

#include<stdio.h>
#define PI 3.14159
int main()
{
	double r, C, S;//rΪԲ�İ뾶��CΪԲ���ܳ���SΪԲ�����
	scanf("%lf", &r);
	C = 2 * PI * r;
	S = PI * r * r;
	printf("Բ���ܳ�=%lf\nԲ�����=%lf\n", C, S);
	return 0;
}

#include<stdio.h>
int main()
{
	double a, b, sum, difference, product, quotient;//a,bΪ���������������sumΪ������֮�ͣ�differenceΪ������֮�productΪ������֮��;quotientΪ������֮��
	scanf("%lf%lf", &a, &b);
	sum = a + b;
	difference = a - b;
	product = a * b;
	quotient = a / b;
	printf("���������ĺ�=%lf\n���������Ĳ�=%lf\n������������=%lf\n������������=%.2lf\n", sum, difference, product, quotient);
	return 0;
}

#include<stdio.h>
int main()
{
	double a, b, c, sum, product, average;//a,b,cΪ���������������sumΪ�������ĺͣ�productΪ�������ĳ˻�;averageΪ��������ƽ����
	scanf("%lf%lf%lf", &a, &b, &c);
	sum = a + b + c;
	product = a * b * c;
	average = sum / 3;
	printf("���������ĺ�=%lf\n���������Ļ�=%lf\n����������ƽ����=%.2lf\n", sum, product, average);
	return 0;
}

#include<stdio.h>
int main()
{
	double fahr, centi;//fahrΪ�����¶ȣ�centiΪ�����¶�
	scanf("%lf", &fahr);
	centi = 5 * (fahr - 32) / 9;
	printf("�����¶�=%lf\n�����¶�=%lf\n", fahr, centi);
	return 0;
}

#include<stdio.h>
int main()
{
	int n, a, b, c;//nΪ�����С��1000��������aΪ��λ�ϵ����֣�bΪʮλ�ϵ����֣�cΪ��λ�ϵ�����
	scanf("%d", &n);
	a = n % 10;
	b = (n / 10) % 10;
	c = (n / 100) % 10;
	printf("��λ�ϵ�����=%d\nʮλ�ϵ�����=%d\n��λ�ϵ�����=%d\n", a, b, c);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	double a, b;//aΪ���������ʵ����bΪa�ľ���ֵ
	scanf("%lf", &a);
	b = fabs(a);
	printf("����ֵ=%.2lf\n", b);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	double x1, y1, x2, y2, distance;//������ֱ�Ϊ(x1,y1)��(x2,y2);distanceΪ��������
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	printf("%.2lf\n", distance);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, S;//a,b,c�ֱ�Ϊ�����εı߳���pΪ�����α߳���һ�룻SΪ�����ε����
	scanf("%lf%lf%lf", &a, &b, &c);
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("���������=%.2lf\n", S);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, x1, x2;//a,b,cΪһԪ���η���ax^2+bx+c=0��ϵ����
	scanf("%lf%lf%lf", &a, &b, &c);
	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	printf("x1=%lf\nx2=%lf\n", x1, x2);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	double money, year, rate, sum;//moneyΪ�����yearΪ���ڣ�rateΪ�����ʣ�sumΪ���ڵ���ʱ�ı�Ϣ�ϼƣ�˰ǰ��
	scanf("%lf%lf%lf", &money, &year, &rate);
	sum = money * pow((1 + rate), year);
	printf("���ڵı�Ϣ�ϼƣ�˰ǰ��=%.2lf", sum);
	return 0;
}