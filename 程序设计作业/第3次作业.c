//���ö��֧�ж��ַ�����
#include<stdio.h>
int main()
{
	char ch;
	ch = getchar();
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		printf("��ĸ\n");
	else if (ch >= '0' && ch <= '9')
		printf("����\n");
	else if (ch == ' ' || ch == '\n')
		printf("�ָ���\n");
	else
		printf("����\n");
	return 0;
}

//switch��������������
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
	default: printf("���������\n");
	}
	return 0;
}