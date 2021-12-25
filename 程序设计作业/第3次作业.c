//利用多分支判断字符类型
#include<stdio.h>
int main()
{
	char ch;
	ch = getchar();
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		printf("字母\n");
	else if (ch >= '0' && ch <= '9')
		printf("数字\n");
	else if (ch == ' ' || ch == '\n')
		printf("分隔符\n");
	else
		printf("其他\n");
	return 0;
}

//switch语句进行四则运算
#include<stdio.h>
int main()
{
	char op;
	double x, y;
	scanf("%lf%c%lf", &x, &op, &y);
	switch (op)
	{
	case '+': printf("=%lf\n", x + y); break;
	case '-': printf("=%lf\n", x - y); break;
	case '*': printf("=%lf\n", x * y); break;
	case '/': printf("=%lf\n", x / y); break;
	default: printf("运算符错误\n");
	}
	return 0;
}