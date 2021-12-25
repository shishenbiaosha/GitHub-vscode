//使用分支结构求奇偶数
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (1 == a % 2)
        printf("odd");
    else
        printf("even");
    return 0;
}

//使用分支结构实现两整数排序
#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y)
        printf("%d %d\n", y, x);
    else
        printf("%d %d\n", x, y);
    return 0;

}

//使用分支结构实现三整数排序
#include <stdio.h>
int main()
{
    int x, y, z, t;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
    {
        t = x;
        x = y;
        y = t;
    }
    if (x > z)
    {
        t = x;
        x = z;
        z = t;
    }
    if (y > z)
    {
        t = y;
        y = z;
        z = t;
    }
    printf("%d %d %d", z, y, x);
    return 0;
}

//使用分支结构判断闰年
#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}

//使用分支结构判定三角形
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}

//使用分支结构判断最大字符
#include <stdio.h>
int main()
{
    char x, y, z, t;
    scanf("%c %c %c", &x, &y, &z);
    if (x > y)
    {
        t = x;
        x = y;
        y = t;
    }
    if (x > z)
    {
        t = x;
        x = z;
        z = t;
    }
    if (y > z)
    {
        t = y;
        y = z;
        z = t;
    }
    printf("%c", z);
    return 0;
}

//使用分支结构判断员工薪水
#include<stdio.h>
int main()
{
    double salary;
    int sales;
    scanf("%d", &sales);
    if (sales <= 10000)
        salary = 1500 + 0.05 * sales;
    else if (sales > 10000 && sales <= 50000)
        salary = 2000 + 0.03 * (sales - 10000);
    else if (sales > 50000)
        salary = 3200 + 0.02 * (sales - 50000);
    printf("%.2lf", salary);
    return 0;
}