#include<stdio.h>
void menu()
{
    printf("1.加法\n");
    printf("2.减法\n");
    printf("3.乘法\n");
    printf("4.除法\n");
}
void add()
{
    int a, b;
    printf("请输入两个数\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
}
void sub()
{
    int a, b;
    printf("请输入两个数\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", a - b);
}
void mul()
{
    int a, b;
    printf("请输入两个数\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", a * b);
}
void div()
{
    double a, b;
    printf("请输入两个数\n");
    scanf("%d%d", &a, &b);
    if (b != 0)
        printf("%.1lf\n", a / b);
    else if(b == 0)
        printf("输入错误\n");
}
int main()
{
    int input = 0;
    do
    {
        menu();
        printf("请选择\n");
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
            printf("输入错误\n");
            break;
        }
    } while (input);
    return 0;
}