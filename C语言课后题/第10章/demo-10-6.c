#include<stdio.h>
void menu()
{
    printf("1.�ӷ�\n");
    printf("2.����\n");
    printf("3.�˷�\n");
    printf("4.����\n");
}
void add()
{
    int a, b;
    printf("������������\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
}
void sub()
{
    int a, b;
    printf("������������\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", a - b);
}
void mul()
{
    int a, b;
    printf("������������\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", a * b);
}
void div()
{
    double a, b;
    printf("������������\n");
    scanf("%d%d", &a, &b);
    if (b != 0)
        printf("%.1lf\n", a / b);
    else if(b == 0)
        printf("�������\n");
}
int main()
{
    int input = 0;
    do
    {
        menu();
        printf("��ѡ��\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        default:
            printf("�������\n");
            break;
        }
    } while (input);
    return 0;
}