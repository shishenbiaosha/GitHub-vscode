#include<stdio.h>
int main()
{
	int a, b, sum;
	scanf("%d%d", &a, &b);
	sum = a + b;//进行两个整数的求和计算
	printf("这两个数的和=%d\n", sum);
	return 0;
}

#include<stdio.h>
int main()
{
	double a, b, average;
	scanf("%lf%lf", &a, &b);
	average = (a + b) / 2;//进行两个实数求平均值的运算
	printf("这两个数的平均值=%lf\n", average);
	return 0;
}

#include<stdio.h>
#define PI 3.14159
int main()
{
	double r, C, S;//r为圆的半径，C为圆的周长，S为圆的面积
	scanf("%lf", &r);
	C = 2 * PI * r;
	S = PI * r * r;
	printf("圆的周长=%lf\n圆的面积=%lf\n", C, S);
	return 0;
}

#include<stdio.h>
int main()
{
	double a, b, sum, difference, product, quotient;//a,b为输入的两个整数；sum为两个数之和；difference为两个数之差；product为两个数之积;quotient为两个数之商
	scanf("%lf%lf", &a, &b);
	sum = a + b;
	difference = a - b;
	product = a * b;
	quotient = a / b;
	printf("这两个数的和=%lf\n这两个数的差=%lf\n这两个数的商=%lf\n这两个数的商=%.2lf\n", sum, difference, product, quotient);
	return 0;
}

#include<stdio.h>
int main()
{
	double a, b, c, sum, product, average;//a,b,c为输入的三个整数；sum为三个数的和；product为三个数的乘积;average为三个数的平均数
	scanf("%lf%lf%lf", &a, &b, &c);
	sum = a + b + c;
	product = a * b * c;
	average = sum / 3;
	printf("这三个数的和=%lf\n这三个数的积=%lf\n这三个数的平均数=%.2lf\n", sum, product, average);
	return 0;
}

#include<stdio.h>
int main()
{
	double fahr, centi;//fahr为华氏温度；centi为摄氏温度
	scanf("%lf", &fahr);
	centi = 5 * (fahr - 32) / 9;
	printf("华氏温度=%lf\n摄氏温度=%lf\n", fahr, centi);
	return 0;
}

#include<stdio.h>
int main()
{
	int n, a, b, c;//n为输入的小于1000的整数；a为个位上的数字；b为十位上的数字；c为百位上的数字
	scanf("%d", &n);
	a = n % 10;
	b = (n / 10) % 10;
	c = (n / 100) % 10;
	printf("个位上的数字=%d\n十位上的数字=%d\n百位上的数字=%d\n", a, b, c);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	double a, b;//a为输入的任意实数；b为a的绝对值
	scanf("%lf", &a);
	b = fabs(a);
	printf("绝对值=%.2lf\n", b);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	double x1, y1, x2, y2, distance;//有两点分别为(x1,y1)、(x2,y2);distance为两点间距离
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	printf("%.2lf\n", distance);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, p, S;//a,b,c分别为三角形的边长；p为三角形边长的一半；S为三角形的面积
	scanf("%lf%lf%lf", &a, &b, &c);
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("三角形面积=%.2lf\n", S);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, x1, x2;//a,b,c为一元二次方程ax^2+bx+c=0的系数；
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
	double money, year, rate, sum;//money为存入金额；year为存期；rate为年利率；sum为存期到期时的本息合计（税前）
	scanf("%lf%lf%lf", &money, &year, &rate);
	sum = money * pow((1 + rate), year);
	printf("存款到期的本息合计（税前）=%.2lf", sum);
	return 0;
}