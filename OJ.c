//1000: A + B Problem
//计算两个整数a, b的和
#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a + b);
    return 0;
}

//1001: 植树问题
//某学校植树节开展植树活动，已知树苗有m株，参加植树的同学有n人（且m>n），请问每位同学平均可以植树几株？还有几株剩余？
#include<stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d %d", m / n, m % n);
    return 0;
}

//1002: 简单多项式求值
//对用户输入的任一整数，输出以下多项式的值。y = 2x2 + x + 8
#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int y = 2 * x * x + x + 8;
    printf("%d", y);
    return 0;
}

//1003: 两个整数的四则运算
//输入两个整数num1和num2，请你设计一个程序，计算并输出它们的和、差、积、整数商及余数。
#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d ", num1 + num2);
    printf("%d ", num1 - num2);
    printf("%d ", num1 * num2);
    printf("%d ", num1 / num2);
    printf("%d ", num1 % num2);
    return 0;
}

//1004: 三位数的数位分离
//从键盘输入一个任意的三位正整数，分别求出其个位、十位和百位上的数字。
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d ", a % 10);
    printf("%d ", a / 10 % 10);
    printf("%d\n", a / 100 % 10);
    return 0;
}

//1005: 整数幂
//输入3个整数，输出它们的1次幂、2次幂和3次幂。
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%-9d%-9d%-9d\n", a, a * a, a * a * a);
    printf("%-9d%-9d%-9d\n", b, b * b, b * b * b);
    printf("%-9d%-9d%-9d\n", c, c * c, c * c * c);
    return 0;
}

//1006: 求等差数列的和
//给出三个整数，分别表示等差数列的第一项、最后一项和公差，求该数列的和。
#include<stdio.h>
int main()
{
    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);
    result = (b - a + c) * (a + b) / (2 * c);
    printf("%d", result);
    return 0;
}

//1007: 鸡兔同笼
//鸡和兔关在一个笼子里，鸡有2只脚，兔有4只脚，没有例外。已知现在可以看到笼子里m个头和n只脚，求鸡和兔子各有多少只？
#include<stdio.h>
int main()
{
    int m, n;
    int a, b;
    scanf("%d %d", &m, &n);
    a = (4 * m - n) / 2;
    b = m - a;
    printf("%d %d", a, b);
    return 0;
}

//1008: 美元和人民币
//美元越来越贬值了，手上留有太多的美元似乎不是件好事。赶紧算算你的那些美元还值多少人民币吧。假设美元与人民币的汇率是1美元兑换6.5573元人民币，编写程序输入美元的金额，输出能兑换的人民币金额。
#include<stdio.h>
int main()
{
    double dollar, rmb;
    scanf("%lf", &dollar);
    printf("%.2lf", 6.5573 * dollar);
    return 0;
}

//1009: 求平均分
//已知某位学生的数学、英语和计算机课程的成绩，求该生三门课程的平均分。
#include<stdio.h>
int main()
{
    float math, eng, com, ave;
    scanf("%f %f %f", &math, &eng, &com);
    printf("%.2f", (math + eng + com) / 3);
    return 0;
}

//1010: 求圆的周长和面积
//输入圆的半径，求圆的周长和面积。 要求定义圆周率为如下宏常量 #define PI 3.14159
#include<stdio.h>
#define PI 3.14159
int main()
{
    double r, C, S;
    scanf("%lf", &r);
    C = 2 * PI * r;
    S = PI * r * r;
    printf("%.2lf %.2lf", C, S);
    return 0;
}

//1011: 圆柱体表面积
//输入圆柱体的底面半径r和高h，计算圆柱体的表面积并输出到屏幕上。要求定义圆周率为如下宏常量 #define PI 3.14159
#include<stdio.h>
#define PI 3.14159
int main()
{
    double r, h, S;
    scanf("%lf%lf", &r, &h);
    S = 2 * PI * r * (r + h);
    printf("%.2lf", S);
    return 0;
}

//1012: 求绝对值
//求实数的绝对值。
#include<stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);
    if (a >= 0)
        printf("%.2lf", a);
    else
        printf("%.2lf", -a);
    return 0;
}

//1013: 求两点间距离
//给定A(x1, y1), B(x2, y2)两点坐标，计算它们间的距离。
#include<stdio.h>
#include<math.h>
int main()
{
    double x1, x2, y1, y2, dis;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("%.2lf", dis);
    return 0;
}

//1014: 求三角形的面积
//给出三角形的三条边，求三角形的面积。
#include<stdio.h>
#define P (a + b +c) / 2
#include<math.h>
int main()
{
    double a, b, c, S;
    scanf("%lf %lf %lf", &a, &b, &c);
    S = sqrt(P * (P - a) * (P - b) * (P - c));
    printf("%.2lf", S);
    return 0;
}

//1015: 二次方程的实根
//编程计算并输出一元二次方程ax^2+bx+c=0的两个实根，其中a、b、c的值由用户从键盘输入，假设a、b、c的值能保证方程有两个不相等的实根（即b^2-4ac>0）。
#include<stdio.h>
#include<math.h>
#define P sqrt(b * b - 4 * a * c)
int main()
{
    double a, b, c, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    x1 = (-b + P) / (2 * a);
    x2 = (-b - P) / (2 * a);
    if (x1 > x2)
        printf("%7.2lf%7.2lf", x1, x2);
    else
        printf("%7.2lf%7.2lf", x2, x1);
    return 0;
}

//1016: 银行利率
//设银行1年期定期存款年利率为2.25 % ，存款本金为deposit元，试编程计算并输出n年后的本利之和。
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double deposit;
    scanf("%d %lf", &n, &deposit);
    printf("%.6lf", deposit * pow((1 + 0.0225), n));
    return 0;
}

//1017: 表面积和体积
//读入5个整数a, b, c, d 和 e，计算物体的表面积和体积。你可以想像该物体是一个长宽高为a, b, c 的长方体，每一面中央都是凹进去的，而凹进去的深度为 d，没凹进去的边框宽度 e。
#include<stdio.h>
int main()
{
    int a, b, c, d, e, s, v;
    scanf("%d\n%d\n%d\n%d\n%d\n", &a, &b, &c, &d, &e);
    s = (2 * a * c) + (2 * a * b) + (2 * b * c) + (8 * a * d) + (8 * b * d) + (8 * c * d) - (48 * e * d);
    v = (a * b * c) - ((2 * a * b * d) + (2 * a * c * d) + (2 * b * c * d) - (8 * a * d * e) - (8 * c * d * e) - (8 * b * d * e) + (24 * d * e * e));
    printf("%d %d", s, v);
    return 0;
}

//1018: 奇数偶数
//输入一个整数，判断该数是奇数还是偶数。
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("even");
    else
        printf("odd");
    return 0;
}

//1019: 公园门票
//某公园门票的票价是每人50元，一次购票满30张，每张可以少收2元。试编写自动计费系统程序。
#include<stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if (n < 30)
        printf("%.2f", 50 * n);
    else
        printf("%.2f", 48 * n);
    return 0;
}

//1020: 两整数排序
//从键盘输入两个整数x,y，按从小到大的顺序输出它们的值。
#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (x > y)
        printf("%d %d", y, x);
    else
        printf("%d %d", x, y);
    return 0;
}

//1021: 三个整数的最大值
//从键盘输入三个整数x,y和z，求出其中最大的数。
#include<stdio.h>
int main()
{
    int x, y, z, max;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
        if (x > z)
            max = x;
        else
            max = z;
    else
        if (y > z)
            max = y;
        else
            max = z;
    printf("%d", max);
    return 0;
}

//1022: 三整数排序
//从键盘输入三个整数x, y和z，按从大到小的顺序输出它们的值。
#include<stdio.h>
int main()
{
    int x, y, z, temp;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    if (x > z)
    {
        temp = x;
        x = z;
        z = temp;
    }
    if (y > z)
    {
        temp = y;
        y = z;
        z = temp;
    }
    printf("%d %d %d", z, y, x);
    return 0;
}

//1023: 大小写转换
//输入一个字母，若是小写字母，则变为大写输出，否则，原样输出。
#include<stdio.h>
int main()
{
    char ch;
    ch = getchar();
    if (ch >= 'A' && ch <= 'Z')
        putchar(ch);
    if (ch >= 'a' && ch <= 'z')
        putchar(ch - 32);
    return 0;
}

//1024: 计算字母序号
//输入一个英文字母（可能是大写，也可能是小写），输出该字母在字母表中的序号（’a’和’A’的序号为1）。
#include<stdio.h>
int main()
{
    char ch;
    ch = getchar();
    if (ch >= 'A' && ch <= 'Z')
        printf("%d", ch - 'A' + 1);
    if (ch >= 'a' && ch <= 'z')
        printf("%d", ch - 'a' + 1);
    return 0;
}

//1025: 最大字符
//给你三个ASCII字符(不含空白字符:包括空格、制表符\t、回车换行符\n)，找出其中最大的那个
#include<stdio.h>
int main()
{
    char ch1, ch2, ch3, max;
    scanf("%c %c %c", &ch1, &ch2, &ch3);
    if (ch1 > ch2)
        if (ch1 > ch3)
            max = ch1;
        else
            max = ch3;
    else
        if (ch2 > ch3)
            max = ch2;
        else
            max = ch3;
    putchar(max);
    return 0;
}

//1026: 字符类型判断
//从键盘输入一个字符，判断该字符是否大写字母、小写字母、数字字符或其他字符。分别输出对应的提示信息。
#include<stdio.h>
int main()
{
    char ch;
    ch = getchar();
    if (ch >= 'A' && ch <= 'Z')
        printf("upper");
    else if (ch >= 'a' && ch <= 'z')
        printf("lower");
    else if (ch >= '0' && ch <= '9')
        printf("digit");
    else
        printf("other");
    return 0;
}

//1027: 判断水仙花数
//“水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153 = 13 + 53 + 33。现在要求输入一个三位数，判断该数是否是水仙花数，如果是，输出“yes”，否则输出“no”
#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    b = a % 10;
    c = (a / 10) % 10;
    d = (a / 100) % 10;
    if (a == b * b * b + c * c * c + d * d * d)
        printf("yes");
    else
        printf("no");
    return 0;
}

//1028: I love 闰年！
//根据一个年份，判断是否是闰年。
#include<stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}

//1029: 三角形判定
//给你三个正整数，判断用这三个整数做边长是否能构成一个三角形。
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
        printf("Yes");
    else
        printf("No");
    return 0;
}

//1030: 判断直角三角形
//输入三个正整数，判断用这三个整数做边长是否能构成一个直角三角形。
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        printf("yes");
    else
        printf("no");
    return 0;
}

//1031: 判断点在第几象限
//从键盘输入2个整数x、y值，表示平面上一个坐标点，判断该坐标点处于第几象限，并输出相应的结果。
#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > 0)
        if (y > 0)
            printf("1");
        else
            printf("4");
    else
        if (y > 0)
            printf("2");
        else
            printf("3");
    return 0;
}

//1032: 员工薪水
//某公司规定，销售人员工资由基本工资和销售提成两部分组成，其中基本工资是1500元/月，销售提成规则如下：销售额小于等于10000元时，按照5% 提成；销售额大于10000元但小于等于50000元时，超出10000部分按照3% 提成；销售额大于50000元时，超出50000部分按照2% 提成。编写程序，根据销售额计算员工收入。
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

//1033: 五级制成绩
//给定一个百分制成绩, 请根据百分制成绩输出其对应的等级。转换关系如下： 90分以上为’A’，80~89为’B’， 70~79为’C’， 60~69为’D’，60分以下为’E’。
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 90)
        printf("A");
    else if (a >= 80 && a <= 89)
        printf("B");
    else if (a >= 70 && a <= 79)
        printf("C");
    else if (a >= 60 && a <= 69)
        printf("D");
    else if (a < 60)
        printf("E");
    return 0;
}

//1034: 夏季促销
//商场夏季促销，购物500元以下，不打折；购物500元（含）以上，95折；购物1000元（含）以上，9折；购物3000元（含）以上，85折；购物5000元（含）以上，8折。根据消费金额，确定用户实际需要支付的数目。
#include<stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);
    if (a < 500)
        a = a;
    else if (a >= 500 && a < 1000)
        a = 0.95 * a;
    else if (a >= 1000 && a < 3000)
        a = 0.9 * a;
    else if (a >= 3000 && a < 5000)
        a = 0.85 * a;
    else if (a >= 5000)
        a = 0.8 * a;
    printf("%.2lf", a);
    return 0;
}

//1035: 分段函数求值
//已知：y是x的函数, 当x < -2时，y = 7 - 2x；当x >= -2, 且x < 3时，y = 5 - | 3x + 2 | ；当x >= 3时，y = 3x + 4
#include<stdio.h>
#include<math.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    if (x < -2)
        y = 7 - 2 * x;
    else if (x >= -2 && x < 3)
        y = 5 - fabs(3 * x + 2);
    else if (x >= 3)
        y = 3 * x + 4;
    printf("%d", y);
    return 0;
}

//1036: 某年某月有多少天
//给你一个年份和月份，求该月有多少天
#include<stdio.h>
int main()
{
    int year, month;
    scanf("%d %d", &year, &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:printf("31"); break;
    case 4:
    case 6:
    case 9:
    case 11:printf("30"); break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            printf("29");
        else
            printf("28");
        break;
    default:printf("输入错误");
    }
    return 0;
}

//1037: 四则运算
//给你一个简单的四则运算表达式，包含两个实数和一个运算符，请编程计算出结果
#include<stdio.h>
#include<math.h>
int main()
{
    double s1, s2;
    char op;
    scanf("%lf %c %lf", &s1, &op, &s2);
    switch (op)
    {
    case '+':printf("%.2lf", s1 + s2); break;
    case '-':printf("%.2lf", s1 - s2); break;
    case '*':printf("%.2lf", s1 * s2); break;
    case '/':
        if (fabs(s2) < 1e-10)
            printf("Wrong input");
        else
            printf("%.2lf", s1 / s2); break;
    default:printf("Wrong input"); break;
    }
    return 0;
}

//1038: 绝对值最大
//输入3个整数，输出绝对值最大的那个数。
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, max = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (fabs(a) > fabs(b))
    {
        if (fabs(a) > fabs(c))
            max = a;
        else if (fabs(a) < fabs(c))
            max = c;
        else if (fabs(a) == fabs(c))
            max = a;
    }
    else if (fabs(a) < fabs(b))
    {
        if (fabs(b) > fabs(c))
            max = b;
        else if (fabs(b) < fabs(c))
            max = c;
        else if (fabs(b) == fabs(c))
            max = b;
    }
    else if (fabs(a) == fabs(b))
        max = a;
    printf("%d", max);
    return 0;
}

//1039: n个数求和
//输入一个整数n和n个整数，输出这n个整数的和。
#include<stdio.h>
int main()
{
    int n, i, num, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("%d", sum);
    return 0;
}

//1040: 数列求和1
//输入一个整数n，输出数列1+1/3+1/5+……前n项的和。
#include<stdio.h>
int main()
{
    int n;
    double result = 0, i;
    scanf("%d", &n);
    for (i = 1; i < n + 1; i++)
    {
        result += 1 / (2 * i - 1);
    }
    printf("%.2lf", result);
    return 0;
}

//1041: 数列求和2
//输入一个整数n，输出数列1-1/3+1/5-……前n项的和。
#include<stdio.h>
int main()
{
    int n, flag;
    double result = 0, i;
    scanf("%d", &n);
    flag = 1;
    for (i = 1; i <= n; i++)
    {
        result += flag / (2 * i - 1);
        flag = -flag;
    }
    printf("%.2lf", result);
    return 0;
}

//1042: 数列求和3
//求1-2/3+3/5-4/7+5/9-6/11+...的前n项和，结果保留3位小数。
#include<stdio.h>
int main()
{
    int n, flag;
    double result = 0, i;
    scanf("%d", &n);
    flag = 1;
    for (i = 1; i <= n; i++)
    {
        result += flag * i / (2 * i - 1);
        flag = -flag;
    }
    printf("%.3lf", result);
    return 0;
}

//1043: 最大值
//输入一个整数n和n个整数，输出这n个整数的最大值。
#include<stdio.h>
#include<limits.h>
int main()
{
    int n, i, num, max = INT_MIN;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num > max)
            max = num;
    }
    printf("%d\n", max);
    return 0;
}

//1044: 不及格率
//输入n和n个学生成绩(实数），输出不及格率。
#include<stdio.h>
int main()
{
    int n, i;
    double score, count = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%lf", &score);
        if (score < 60)
            count++;
    }
    printf("%.2lf", count / n);
    return 0;
}

//1045: 数值统计
//统计给定的n个数中，负数、零和正数的个数。
#include<stdio.h>
int main()
{
    int n, i, num;
    int a = 0, b = 0, c = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num < 0)
            a++;
        else if (num == 0)
            b++;
        else if (num > 0)
            c++;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}

//1046: 奇数的乘积
//#include<stdio.h>
int main()
{
    int n, num, result = 1, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
            continue;
        else
            result *= num;
    }
    printf("%d", result);
    return 0;
}

//1047: 对数表
//输入两个正整数m和n，输出m到n之间每个整数的自然对数。
#include<stdio.h>
#include<math.h>
int main()
{
    int m, n;
    for (scanf("%d %d", &m, &n); m <= n; m++)
    {
        printf("%4d%8.4lf\n", m, (double)log(m));
    }
    return 0;
}

//1048: 阶乘表
//输入一个正整数n(n<=20)，输出1到n之间阶乘表。
#include<stdio.h>
int main()
{
    int n, i;
    double a = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a *= i;
        printf("%-4d%-20.0lf\n", i, a);
    }
    return 0;
}

//1049: 平方和与立方和
//给定两个整数m和n，求出m~n这段连续的整数中所有偶数的平方和以及所有奇数的立方和。
#include<stdio.h>
int main()
{
    int m, n, x = 0, y = 0;
    for (scanf("%d %d", &m, &n); m <= n; m++)
    {
        if (m % 2 == 0)
            x += m * m;
        else
            y += m * m * m;
    }
    printf("%d %d\n", x, y);
    return 0;
}

//1050: 阶乘的累加和
//求1! + 2! + ……n!
#include<stdio.h>
int main()
{
    int n, i, a = 1, b = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a *= i;
        b += a;
    }
    printf("%d", b);
    return 0;
}

//1051: 平方根的和
//数列的定义如下： 数列的第一项为item，以后各项为前一项的平方根，求数列的前n项的和。
#include<stdio.h>
#include<math.h>

int main()
{
    int n, i;
    double sum = 0, item;
    scanf("%lf %d", &item, &n);
    for (i = 1; i <= n; i++)
    {
        sum += item;
        item = sqrt(item);
    }
    printf("%.2lf\n", sum);
    return 0;
}

//1052: 数列求和4
//输入n和a，求a + aa + aaa + …aa…a(n个a)，如当n = 3, a = 2时，2 + 22 + 222的结果为246
#include<stdio.h>
int main()
{
    int n, a, i, sum = 0, b = 0;
    scanf("%d %d", &n, &a);
    for (i = 1; i <= n; i++)
    {
        b = b * 10 + a;
        sum = sum + b;
    }printf("%d", sum);
    return 0;
}

//1053: 正弦函数
//(图略)输入x，计算上面公式的前10项和。
#include<stdio.h>
int main()
{
    int flag;
    double x, result = 0.0, b = 1.0, i;
    scanf("%lf", &x);
    flag = 1;
    double a = x;
    for (i = 1; i <= 10; i++)
    {
        result += flag * a / b;
        flag = -flag;
        a = a * x * x;
        b = b * (2 * i) * (2 * i + 1);
    }
    printf("%.3lf", result);
    return 0;
}

//1054: 猴子吃桃
//悟空第一天摘下桃子若干，当即吃掉一半，还不过瘾，又多吃一个，第二天又将剩下的桃子吃掉一半多一个，以后每天吃掉前一天剩下的一半多一个，到第n天准备吃的时候只剩下一个桃子。聪明的你，请帮悟空算一下，他第一天开始吃的时候桃子一共有多少个呢？
#include<stdio.h>
int main()
{
    int num = 1, day, i;
    scanf("%d", &day);
    for (i = 1; i < day; i++)
    {
        num = (num + 1) * 2;
    }
    printf("%d", num);
    return 0;
}

//1055: 兔子繁殖问题
//这是一个有趣的古典数学问题，著名意大利数学家Fibonacci曾提出一个问题：有一对小兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第3个月后每个月又生一对兔子。按此规律，假设没有兔子死亡，第一个月有一对刚出生的小兔子，问第n个月有多少对兔子？
#include<stdio.h>
#define N 44
int main()
{
    int Fib[N];
    int n, i;
    scanf("%d", &n);
    Fib[0] = 1;
    Fib[1] = 1;
    for (i = 2; i < n; i++)
    {
        Fib[i] = Fib[i - 1] + Fib[i - 2];
    }
    printf("%d", Fib[n - 1]);
    return 0;
}

//1056: 整存零取
//假设银行一年整存零取的月息为x，现在某人手头有一笔钱，他打算在今后5年中，每年年底取出1000元作为孩子来年的教育金，到第5年孩子毕业时刚好取完这笔钱，请编程计算第1年年初时他应存入银行多少钱。
#include<stdio.h>
int main()
{
    int i;
    double x, a;
    scanf("%lf", &x);
    a = 0.0;
    for (i = 1; i <= 5; i++)
        a = (a + 1000) / (1 + 12 * x);
    printf("%.2f\n", a);
    return 0;
}

//1057: 素数判定
//输入一个正整数n，判断n是否是素数，若n是素数，输出”Yes”,否则输出”No”。
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 2; i <= sqrt(n + 1); i++)
    {
        if (n % i == 0)
            break;
    }
    if (i <= sqrt(n + 1) || n == 1)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}


//1058: 求解不等式
//已知不等式 1！+2！+3！+...+m！?n,请编程对用户指定的n值计算并输出满足该不等式的m的整数解。
#include<stdio.h>
int main()
{
    int n, i;
    double a = 1, b = 0;
    scanf("%d", &n);
    for (i = 1; ; i++)
    {
        a = a * i;
        b = b + a;
        if (b >= n)
        {
            printf("m<=%d", i - 1);
            break;
        }
    }
    return 0;
}

//1059: 最高分
//输入一批学生的成绩（整数），输出最高分。
#include<stdio.h>
int main()
{
    int a, b, c, max;
    max = 0;
    while (scanf("%d", &a), a >= 0)
    {
        if (a > max)
        {
            max = a;
        }
    }
    printf("%d", max);
    return 0;
}

//1060: 逆序数字
//输入一个int型整数，将其逆序输出，每个数字后有一个空格。
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n > 0)
    {
        printf("%d ", n % 10);
        n = n / 10;
    }
    return 0;
}

//1061: 顺序输出各位数字
//输入一个整数，从高位开始逐位分割并输出各位数字。
#include<stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);
    a = n;
    b = 1;
    while (a > 9)
    {
        a /= 10;
        b *= 10;
    }
    while (b > 0)
    {
        printf("%d ", n / b);
        n %= b;
        b /= 10;
    }
    return 0;
}

//1062: 最大公约数
//输入两个正整数，输出其最大公约数。
#include<stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    while (n > 0)
    {
        int t;
        t = m;
        m = n;
        n = t % n;
    }
    printf("%d ", m);
    return 0;
}

//1063: 最大公约与最小公倍
//输入两个正整数，输出其最大公约数和最小公倍数。
#include<stdio.h>
int main()
{
    double m, n, a;
    int b;
    scanf("%lf %lf", &m, &n);
    a = m;
    b = n;
    while (b > 0)
    {
        int t;
        t = a;
        a = b;
        b = t % b;
    }
    printf("%.0lf ", a);
    printf("%.0lf ", m * n / a);
    return 0;
}

//1064: 加密字符
//从键盘输入一批字符，以@结束，按要求加密并输出。
#include<stdio.h>
int main()
{
    char ch = 0;
    while (scanf("%c", &ch), ch != '@')
    {
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        if (ch >= 'a' && ch <= 'y')
            ch = ch + 1;
        else if (ch == 'z')
            ch = ch - 25;
        printf("%c", ch);
    }
    return 0;
}

//1065: 统计数字字符的个数
//输入一行字符，以回车符作为输入结束的标志。统计其中数字字符的个数。
#include<stdio.h>
int main()
{
    char ch[100];
    int i, count;
    gets(ch);
    count = 0;
    for (i = 0; ch[i] != '\0'; i++)//? 换行符是\n 这里用\n不行 
    {
        if (ch[i] >= '0' && ch[i] <= '9')
            count++;
    }
    printf("%d\n", count);
    return 0;
}

//1066: 字符分类统计
//输入一行字符，以回车符作为输入结束的标志。统计其中英文字母、数字字符和其他字符的个数。
#include<stdio.h>
int main()
{
    char ch[100];
    int i, letter, digit, other;
    gets(ch);
    letter = 0;
    digit = 0;
    other = 0;
    for (i = 0; ch[i] != '\0'; i++)//? 换行符是\n 这里用\n不行 
    {
        if (ch[i] >= '0' && ch[i] <= '9')
            digit++;
        else if (ch[i] >= 'A' && ch[i] <= 'Z' || ch[i] >= 'a' && ch[i] <= 'z')
            letter++;
        else
            other++;
    }
    printf("letter:%d\n", letter);
    printf("digit:%d\n", digit);
    printf("other:%d\n", other);
    return 0;
}

//1067: 有问题的里程表
//某辆汽车有一个里程表，该里程表可以显示一个整数，为该车走过的公里数。然而这个里程表有个毛病：它总是从3变到5，而跳过数字4，里程表所有位（个位、 十位、百位等）上的数字都是如此。例如，如果里程表显示339,汽车走过1公里之后，该里程表显示350。
#include<stdio.h>
int main()
{
    int num, i, count;
    count = 0;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 10 == 4)
            continue;
        if ((i / 10) % 10 == 4)
            continue;
        if ((i / 100) % 10 == 4)
            continue;
        count++;
    }
    printf("%d", count);
    return 0;
}

//1068: 二进制数
//将一个二进制数，转换为对应的十进制数。
#include<stdio.h>
int main()
{
    int d, i, n, k;
    scanf("%d", &n);
    d = 0;
    for (i = 1; i <= n; i++)//秦九韶算法
    {
        scanf("%d", &k);
        d = d * 2 + k;
    }
    printf("%d", d);
    return 0;
}

//1069: 向Z同学学习
//Z同学为了实现暑假去云南旅游的梦想，决定以后每天只消费1元，每花k元就可以再得到1元，一开始Z同学有M元，问最多可以坚持多少天。
#include<stdio.h>
int main()
{
    int M, k, day = 0;
    scanf("%d%d", &M, &k);
    while (M--)
    {
        day++;
        if (day % k == 0)
            M++;
    }
    printf("%d", day);
    return 0;
}

//1070: 小汽车的位置
//有一辆智能小车，最初（时间为0)的位置为(0,0)，我们想知道它最后的位置。小车以每小时10公里的速度向北移动（以北为y轴正向，以东为x轴正向）。小车会受到一系列依照时间戳记排序的命令，1表示“向左转”，2表示“向右转”，3表“停止”。每个命令的前面有一个时间戳记，所以我们知道该命令是何时发出的。最后一个命令一定是“停止”。我们另外假设，这辆小车非常灵活，它可以在瞬间转弯。以下列输入为例。小车在时间为5的时候收到一个“向左转”的命令1，在时间10收到一个“向右转”的命令2，在时间15收到一个“停止”的命令3。那么在最后时间15的时候，小车的位置将在（ - 50, 100）。程序只要求输出小车最后的位置，第一个整数是x坐标，第二个整数是y坐标。

//1071: 分解质因子
//将一个正整数分解质因数，例如，输入90，输出2 3 3 5。
#include<stdio.h>
int main()
{
    int m, i;
    scanf("%d", &m);
    for (i = 2; i <= m; i++)
    {
        if (m % i == 0)
        {
            m = m / i;
            printf("%d ", i);
            i = 2;
        }
    }
    return 0;
}

//1072: 青蛙爬井
//有一口深度为high米的水井，井底有一只青蛙，它每天白天能够沿井壁向上爬up米，夜里则顺井壁向下滑down米，若青蛙从某个早晨开始向外爬，对于任意指定的high、up和down值（均为自然数），计算青蛙多少天能够爬出井口？

#include<stdio.h>
int main()
{
    int high, up, down;
    int day, sum;
    scanf("%d%d%d", &high, &up, &down);
    sum = 0;
    for (day = 1; ; day++)
    {
        sum += up;
        if (sum >= high)
            break;
        sum -= down;
    }
    printf("%d\n", day);
    return 0;
}

//1073: 级数求和
//已知：Sn= 1＋1／2＋1／3＋…＋1／n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。现给出一个整数K（1 <= k <= 15），要求计算出一个最小的n；使得Sn＞K。
#include<stdio.h>
int main()
{
    int k;
    double Sn = 0, i;
    scanf("%d", &k);
    for (i = 1; ; i++)
    {
        Sn += (1 / i);
        if (Sn > k)
            break;
    }
    printf("%.0lf", i);
    return 0;
}

//1074: 百钱买百鸡
//百钱买百鸡问题：公鸡五文钱一只，母鸡三文钱一只，小鸡三只一文钱，用100文钱买100只鸡，公鸡、母鸡、小鸡各买多少只？ 本程序要求解的问题是：给定一个正整数n，用n文钱买n只鸡，问公鸡、母鸡、小鸡各买多少只？
#include<stdio.h>
int main()
{
    int n, gj, mj, xj, flag = 0;
    scanf("%d", &n);
    for (gj = 0; gj <= n / 5; gj++)
    {
        for (mj = 0; mj <= n / 3; mj++)
        {
            xj = n - gj - mj;
            if (15 * gj + 9 * mj + xj == 3 * n)
            {
                printf("%4d%4d%4d\n", gj, mj, xj);
                flag = 1;
            }
        }
    }
    if (0 == flag)
        printf("No Answer\n");
    return 0;
}

//1075: 聚餐人数统计
//马克思手稿中有这样一道趣味数学题：男人、女人和小孩总计n个人，在一家饭店里吃饭，共花了cost先令，每个男人各花3先令，每个女人各花2先令，每个小孩各花1先令，请用穷举法编程计算男人、女人和小孩各有几个。
#include<stdio.h>
int main()
{
    int n, cost, man, woman, child, flag = 0;
    scanf("%d %d", &n, &cost);
    for (man = 0; man <= cost / 3; man++)
    {
        for (woman = 0; woman <= cost / 2; woman++)
        {
            child = n - man - woman;
            if (3 * man + 2 * woman + child == cost)
            {
                printf("%d %d %d\n", man, woman, child);
                flag = 1;
            }
        }
    }
    if (0 == flag)
        printf("No answer\n");
    return 0;
}

#include<stdio.h>
int main()
{
    int n, cost, man, woman, child, flag = 0;
    scanf("%d %d", &n, &cost);
    for (man = 0; man <= n; man++)
    {
        for (woman = 0; woman <= n - man; woman++)
        {
            child = n - man - woman;
            if (3 * man + 2 * woman + child == cost)
            {
                printf("%d %d %d\n", man, woman, child);
                flag = 1;
            }
        }
    }
    if (0 == flag)
        printf("No answer\n");
    return 0;
}

//1076: 三位数求解
//已知xyz+yzz=n，其中n是一个正整数，x、y、z都是数字（0-9），编写一个程序求出x、y、z分别代表什么数字。如果无解，则输出“No Answer” 注意：xyz和yzz表示一个三位数，而不是表示x* y* z和y* z* z。
#include<stdio.h>
int main()
{
    int n, x = 1, y = 1, z = 1, flag = 0;
    scanf("%d", &n);
    for (x = 1; x <= 9; x++)
    {
        for (y = 1; y <= 9; y++)
        {
            for (z = 0; z <= 9; z++)
            {
                if (x * 100 + y * 110 + z * 12 == n)
                {
                    printf("%4d%4d%4d", x, y, z);
                    flag = 1;
                }
            }
        }
    }
    if (flag == 0)
        printf("No Answer\n");
    return 0;
}

//1077: 字符串加密
//输入一串字符（长度不超过100）和一个正整数k，将其中的英文字母加密并输出加密后的字符串，非英文字母不变。加密思想：将每个字母c加一个序数k，即用它后面的第k个字母代替，变换公式：c=c+k。如果字母为z，则后一个字母是a，也就是字母字符形成一个圆。
#include<stdio.h>
int main()
{
    int k, i;
    char ch[100] = { 0 };
    scanf("%d\n", &k);
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
            ch[i] = (ch[i] - 'A' + k) % 26 + 'A';
        if (ch[i] >= 'a' && ch[i] <= 'z')
            ch[i] = (ch[i] - 'a' + k) % 26 + 'a';
    }
    puts(ch);
    return 0;
}

//1078: a+b（多实例测试1）
//计算A+B 
#include<stdio.h>
int main()
{
    int a, b, n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}

//1079: a+b（多实例测试2）
//计算A+B
#include<stdio.h>
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        printf("%d\n", a + b);
    }
    return 0;
}

//1080: a+b（多实例测试3）
//计算A + B
#include<stdio.h>
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b), a != 0 || b != 0)
        printf("%d\n", a + b);
    return 0;
}

//1081: n个数求和 （多实例测试）
//求n个整数的和。
#include<stdio.h>
int main()
{
    int T, i, n, j, num, sum;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &n);
        sum = 0;
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
    }
    return 0;
}

//1082: 敲7（多实例测试）
//输出7和7的倍数，还有包含7的数字例如（17，27，37...70，71，72，73...）
#include<stdio.h>
int main()
{
    int t, i, j, N;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &N);
        for (j = 1; j <= N; j++)
        {
            if (j % 10 == 7 || j % 7 == 0 || j / 10 % 10 == 7 || j / 100 % 10 == 7 || j / 1000 % 10 == 7)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}

//1083: 数值统计(多实例测试)
//统计给定的n个数中，负数、零和正数的个数
#include<stdio.h>
int main()
{
    int n, i, fs, ling, zs;
    double num;
    while (scanf("%d", &n), n != 0)
    {
        fs = 0;
        ling = 0;
        zs = 0;
        for (i = 1; i <= n; i++)
        {
            scanf("%lf", &num);
            if (num > 0)
                zs++;
            if (num < 0)
                fs++;
            if (num == 0)
                ling++;

        }

        printf("%d %d %d", fs, ling, zs);
        printf("\n");
    }
    return 0;
}

//1084: 计算两点间的距离（多实例测试）
//输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。
#include<stdio.h>
#include<math.h>
int main()
{
    double x1, y1, x2, y2, dis;
    while (scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
    {
        dis = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        printf("%.2lf", dis);
        printf("\n");
    }
    return 0;
}

//1085: 求奇数的乘积（多实例测试）
//给你n个整数，求他们中所有奇数的乘积 
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, j, num, result;
    while (scanf("%d", &n) != EOF)
    {
        result = 1;
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &num);
            if (num % 2 != 0)
                result *= num;
        }
        printf("%d", result);
        printf("\n");
    }
    return 0;
}

//1086: ASCII码排序（多实例测试）
//输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
#include<stdio.h>
int main()
{
    char a, b, c, t;
    while (scanf("%c%c%c", &a, &b, &c) != EOF)
    {
        getchar();
        if (a > b)
        {
            t = a;
            a = b;
            b = t;
        }
        if (b > c)
        {
            t = b;
            b = c;
            c = t;
        }
        if (a > b)
        {
            t = a;
            a = b;
            b = t;
        }
        printf("%c %c %c\n", a, b, c);
    }
    return 0;
}

//1087: 获取出生日期（多实例测试)
//输入某人的18位身份证号，输出其出生日期。
#include<stdio.h>
int main()
{
    int n, num, i, year, month, day;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        scanf("%*6d%4d%2d%2d%*4d", &year, &month, &day);
        printf("%04d-%02d-%02d", year, month, day);
        printf("\n");
    }
    return 0;
}

//1088: 手机短号 （多实例）
//大家都知道，手机号是一个11位长的数字串，同时，作为学生，还可以申请加入校园网，如果加入成功，你将另外拥有一个短号。假设所有的短号都是是 6+手机号的后5位，比如号码为13512345678的手机，对应的短号就是645678。现在，如果给你一个11位长的手机号码，你能找出对应的短号吗？
#include<stdio.h>
int main()
{
    int N, i, duan;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        scanf("%*6d%5d", &duan);
        duan = 600000 + duan;
        printf("%d", duan);
        printf("\n");
    }
    return 0;
}

//1089: 阶乘的最高位
//输入一个正整数n。输出n!的最高位上的数字。
#include<stdio.h>
int main()
{
    int n, i;
    double fact;
    scanf("%d", &n);
    fact = 1.0;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        while (fact >= 10)
        {
            fact = fact / 10;
        }
    }
    printf("%.0f", fact);
}

//1090: 整数幂（多实例测试）
//求A^B的最后三位数表示的整数（1<=A,B<=1000）
#include<stdio.h>
int main()
{
    int n, i, j, result, num1, num2;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        result = 1;
        scanf("%d%d", &num1, &num2);
        for (j = 1; j <= num2; j++)
        {
            result *= num1;
            result %= 1000;
        }
        printf("%d", result);
        printf("\n");
    }
    return 0;
}

//1091: 童年生活二三事（多实例测试）
//Redraiment小时候走路喜欢蹦蹦跳跳，他最喜欢在楼梯上跳来跳去。 但年幼的他一次只能走上一阶或者一下子蹦上两阶。现在一共有N阶台阶，请你计算一下Redraiment从第0阶到第N阶共有几种走法。
#include<stdio.h>
int Fib(int n)
{
    int a = 1;
    int b = 2;
    int c = 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int N, i, result;
    while (scanf("%d", &N), N != 0)
    {
        result = Fib(N);
        printf("%d", result);
        printf("\n");
    }
    return 0;
}
//1092: 素数表(函数专题）
//输入两个正整数m和n，输出m和n之间的所有素数。 要求程序定义一个prime()函数和一个main()函数，prime()函数判断一个整数n是否是素数，其余功能在main()函数中实现。
//int prime(int n)
//{
//    //判断n是否为素数， 若n为素数，本函数返回1，否则返回0 
//}
#include<stdio.h>
#include<math.h>
int prime(int m)
{
    int i, count = 0;
    for (i = 2; i <= sqrt(m); i++)
    {
        if (m % i == 0)
            count = 1;
    }
    if (count == 1 || m == 1)
        return 0;
    else if (count == 0)
        return 1;
}
int main()
{
    int m, n;
    for (scanf("%d%d", &m, &n); m <= n; m++)
    {
        if (prime(m) == 1)
            printf("%d ", m);
    }
    return 0;
}

#include<stdio.h>//超时
int prime(int n);
int main()
{
    int m, n, i;
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++)
    {
        if (prime(i) == 0)
            continue;
        else
            printf("%d ", i);
    }
    return 0;
}
int prime(int n)
{
    int a;
    for (a = 2; a < n; a++)
    {
        if (n % a == 0)
            break;
    }
    if (a >= n)
        return 1;
    else
        return 0;
}

//1093: 验证哥德巴赫猜想（函数专题）
//哥德巴赫猜想大家都知道一点吧。我们现在不是想证明这个结论，而是对于任给的一个不小于6的偶数，来寻找和等于该偶数的所有素数对。做好了这件实事,就能说明这个猜想是成立的。 要求程序定义一个prime()函数和一个main()函数，prime()函数判断一个整数n是否是素数，其余功能在main()函数中实现。
//int prime(int n)
//{
//    //判断n是否为素数， 若n为素数，本函数返回1，否则返回0 
//}
#include<stdio.h>
#include<math.h>
int prime(int m)
{
    int i, count = 0;
    for (i = 2; i <= sqrt(m); i++)
    {
        if (m % i == 0)
            count = 1;
    }
    if (count == 1 || m == 1)
        return 0;
    else if (count == 0)
        return m;
}
int main()
{
    int M, i;
    scanf("%d", &M);
    for (i = 3; i <= M / 2; i = i + 2)
    {
        if (prime(i) + prime(M - i) == M)
        {
            printf("%d %d", i, M - i);
            printf("\n");
        }
    }
    return 0;
}

//1094: 统计元音（函数专题）
//输入一个字符串，统计其中元音字母的个数。要求使用函数vowel()用来判断是否为元音,其余功能在main()函数中实现。 
//int vowel(char ch)
//{
//    //如果ch是元音，返回1，否则返回0 
//}
#include<stdio.h>
int count = 0;
int vowel(char ch);
int main()
{
    char ch;

    while (scanf("%c", &ch) && ch != '\n')
    {
        if (vowel(ch) == 1)
        {
            count += vowel(ch);
        }
        else
            continue;
    }
    printf("%d\n", count);
    return 0;
}
int vowel(char ch)
{
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
        return 1;
    else
        return 0;
}

//1095: 时间间隔（多实例测试）
//从键盘输入两个时间点(24小时制），输出两个时间点之间的时间间隔，时间间隔用“小时:分钟:秒”表示。要求程序定义如下两个函数，并在main()中调用这两个函数实现相应的功能三个形参分别为为用于表示一个时间点的时、分、秒，函数返回对应的秒。
//int HmsToS(int h, int m, int s);
//形参s表示一个时间段的长度，单位是秒，该函数将该时间段转换为对应的“小时:分钟:秒” 格式输出 
//void PrintTime(int s);
#include<stdio.h>
int HmsToS(int h, int m, int s);
void PrintTime(int s);
int main()
{
    int h, m, s;
    int a, b;
    while (scanf("%2d:%2d:%2d", &h, &m, &s) != EOF)
    {
        a = HmsToS(h, m, s);
        scanf("%2d:%2d:%2d", &h, &m, &s);
        b = HmsToS(h, m, s);
        PrintTime(b - a);
    }
    return 0;
}
int HmsToS(int h, int m, int s)
{
    int time;
    time = h * 60 * 60 + m * 60 + s;
    return time;
}
void PrintTime(int s)
{
    int o, p, q;
    o = s / 60 / 60;
    p = (s / 60) % 60;
    q = s % 60;
    printf("%02d:%02d:%02d\n", o, p, q);
}

//1096: 水仙花数（函数专题,多实例）
//春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，他是这样定义的： “水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153 = 13 + 53 + 33。现在要求输出所有在m和n范围内的水仙花数。
#include<stdio.h>
int flower(int num);
int main()
{
    int m, n, i, flag = 0, f = 0;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        for (i = m; i <= n; i++)
        {
            if (flower(i) == 1)
            {
                if (f == 0)
                {
                    printf("%d", i);
                    flag = 1;
                }
                else
                {
                    printf(" %d", i);
                    flag = 1;
                }
                f = 1;
            }
        }
        if (flag == 0)
            printf("no\n");
        else
            printf("\n");
        flag = 0;
        f = 0;
    }
    return 0;
}
int flower(int num)
{
    int a, b, c;
    a = num % 10;
    b = (num / 10) % 10;
    c = (num / 100) % 10;
    if (num == a * a * a + b * b * b + c * c * c)
        return 1;
    else
        return 0;
}

//1097: 计算平均成绩（函数专题）
//输入某位同学各门课的成绩，输出平均成绩。输入的成绩均为五级制成绩，五级制成绩转换为百分之成绩的规则如下：'A'转换为百分之成绩为95分，'B'对应85分，C对应75分，'D'对应65分，'E'对应40分。 输出的平均成绩为一个实数，保留1为小数。
#include<stdio.h>
int ABCDE(char ch);
int main()
{
    double score = 0;
    char ch;
    int i = 0, j;
    while (scanf("%c", &ch), ch != '\n')
    {
        j = ABCDE(ch);
        score += j;
        i++;
    }
    printf("%.1lf", score / i);
    return 0;
}
int ABCDE(char ch)
{
    int a = 0;
    if (ch == 'A')
        a = 95;
    else if (ch == 'B')
        a = 85;
    else if (ch == 'C')
        a = 75;
    else if (ch == 'D')
        a = 65;
    else if (ch == 'E')
        a = 40;
    return a;
}

//1098: 复合函数求值（函数专题）
//求复合函数F(G(x))，其中函数F(x)=|x-3|+|x+1|，函数G(x)=x^2-3x。要求编写函数funF()和funG()分别求F(x)和G(x)，其余功能在main()中实现。 
//double funF(double x)
//    //函数返回F(x)的值； 
//double funG(double x)
//    //函数返回G(x)的值； 
#include<stdio.h>
#include<math.h>
double funF(double x);
double funG(double x);
int main()
{
    double x, result;
    scanf("%lf", &x);
    funG(x);
    return 0;
}
double funF(double x)
{
    double b = fabs(x - 3) + fabs(x + 1);
    printf("%.2lf", b);
}
double funG(double x)
{
    double a = x * x - 3 * x;
    funF(a);
}

//1099: 角谷猜想（多实例测试）
//任何一个自然数，如果是偶数，就除以2，如果是奇数，就乘以3再加1。最后，经过若干次迭代得到1。也就是说，不管怎样迭代，不断除以2以后，最后是1。现在给你一个自然数n，求出它转变为1所需要的步数。
#include<stdio.h>
int main()
{
    int n, m, i = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        i = 0;
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
                i++;
            }
            else
            {
                n = n * 3 + 1;
                i++;
            }
        }
        printf("%d\n", i);
    }
    return 0;
}

#include<stdio.h>//递归
int jg(int n);
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        jg(n);
        printf("%d\n", jg(n));
    }
    return 0;
}
int jg(int n)
{
    if (n == 1)
        return 0;
    if (n % 2 == 0)
        return 1 + jg(n / 2);
    else
        return 1 + jg(3 * n + 1);
}

//1100: 求组合数（函数专题）
//马上要举办新生程序设计竞赛了，与以往不同的是，本次比赛以班为单位，为了全面衡量一个班级的整体水平，要求从一个班的m位同学中任选k位同学代表本班参加比赛，问有多少种组合方案。显然，这个组合数是m!/(k!(m-k)!)。要求编写函数fact()，实现求一个数的阶乘功能，在主函数中调用此函数。 
//long fact(long n)
//{
//    //函数返回值为n的阶乘。 
//}
#include<stdio.h>
double fact(double n);
int main()
{
    int m, k;
    double result = 0;
    scanf("%d%d", &m, &k);
    result = fact(m) / (fact(k) * fact(m - k));
    printf("%.0lf", result);
    return 0;
}
double fact(double n)
{
    int i;
    double a = 1;
    for (i = 1; i <= n; i++)
        a = a * i;
    return a;
}

//1101: 逆序数字（函数专题）
//输入一个正整数n，计算n的逆序数m，输出m与n的和。要求程序定义一个inverse()函数和一个main()函数，inverse()函数接收一个整数值,返回这个数中数字逆序后的结果值。例如,给定数7631,函数返回1367 。 
//int inverse(int n)
//{
//    //计算并返回n的逆序数字 
//}
#include<stdio.h>
int inverse(int n);
int main()
{
    int n, result;
    scanf("%d", &n);
    result = n + inverse(n);
    printf("%d", result);
    return 0;
}
int inverse(int n)
{
    int a = 0;
    while (n != 0)
    {
        a = a * 10 + n % 10;
        n /= 10;
    }
    return a;
}

//1102: 火车票退票费计算（函数专题）
//2013年起，火车票退票费比例下调：票面乘车站开车时间前48小时以上的按票价5%计退票费。同时，车票退票费的计算方法不再四舍五入到元为单位，而是以5角为单位：尾数小于0.25元的舍去、不小于0.25元且小于0.75元的计为0.5元、不小于0.75元的进为1元。编写一个函数，计算退票费，假定退票时间举例开车时间在48小时以上。函数原型如下：double CancelFee(double price);
#include<stdio.h>
double CancelFee(double price);
int main()
{
    double price;
    scanf("%lf", &price);
    printf("%.1lf", CancelFee(price));
    return 0;
}
double CancelFee(double price)
{
    double a, b;
    a = 0.05 * price;
    b = (int)a;
    if (a < b + 0.25)
        b = b;
    else if (a >= b + 0.25 && a < b + 0.75)
        b += 0.5;
    else b += 1;
    return b;
}

//1103: 平均学分绩点（函数专题）
//平均学分绩点（Grade Point Average，即GPA）是以学分与绩点作为衡量学生学习的量与质的计算单位，以取得一定的学分和平均学分绩点作为毕业和获得学位的标准，实施多样的教育规格和较灵活的教学管理制度。大学里每一门课程都有一定的学分。只有通过这门课的考试，才能获得相应的学分。课程绩点的计算方法通常是：（百分制成绩 - 50) / 10 取整。成绩100，对应绩点为5，成绩90~99对应绩点为4，......，成绩60~69对应绩点为1，成绩小于60，对应绩点为0。平均学分绩点的计算方法是：是将学生修过的每一门课程的绩点乘以该门课程的学分，累加后再除以总学分。 平均学分绩点可以作为学生学习能力与质量的综合评价指标之一。请编程计算一个学生的平均学分绩点。
#include<stdio.h>
int jd(int n)
{
    if (n == 100)
        return 5.0;
    else if (n >= 90 && n <= 99)
        return 4.0;
    else if (n >= 80 && n <= 89)
        return 3.0;
    else if (n >= 70 && n <= 79)
        return 2.0;
    else if (n >= 60 && n <= 69)
        return 1.0;
    else
        return 0;
}
int main()
{
    int n;
    int xf, cj;
    double sum = 0, sjd = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &xf, &cj);
        sjd += jd(cj) * xf;
        sum += xf;
    }
    printf("%.1lf", sjd / sum);
    return 0;
}

//1104: 求因子和（函数专题）
//输入正整数n（2<=n<=1000），计算并输出n的所有正因子(包括1，不包括自身)之和。要求程序定义一个FacSum ()函数和一个main()函数，FacSum ()函数计算并返回n的所有正因子之和，其余功能在main()函数中实现。 
//int FacSum(int n) 
//{ 
////计算n的所有正因子(包括1，不包括自身)之和sum，本函数返回sum 
//} 
#include<stdio.h>
int FacSum(int n)
{
    int sum = 1, i;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            sum += i;
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", FacSum(n));
    return 0;
}

// 1105: 判断友好数对（函数专题）
//输入两个正整数m和n，顺序输出m到n之间的所有友好数对。如果两个整数的所有正因子之和（包括1，不包括自身）等于对方，就称这对数是友好的。例如：1184和1210是友好数对，因为 1184的因子之和为1+2+4+8+16+32+37+74+148+296+592=1210 1210的因子之和为1+2+5+10+11+22+55+110+121+242+605=1184 要求程序定义一个facsum ()函数和一个main()函数，facsum ()函数计算并返回n的所有正因子之和，其余功能在main()函数中实现。 
// int facsum (int n) 
// { 
// //计算n的所有正因子之和sum，本函数返回sum 
// } 
#include<stdio.h>
int facsum(int n)
{
    int sum = 1, i;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            sum += i;
    return sum;
}
int main()
{
    int n, m, j, x, f1 = 0, f2 = 0;
    scanf("%d%d", &m, &n);
    for (j = m; j <= n; j++)
    {
        x = facsum(j);
        if (j == facsum(x) && j < x)
        {
            if (f2 == 0)
                printf("%d %d", j, x);
            else
                printf("\n%d %d", j, x);
            f1 = 1, f2 = 1;
        }
    }
    if (f1 == 0)
        printf("No answer\n");
    return 0;
}

// 1106: 回文数（函数专题）
//一个正整数，如果从左向 右读（称之为正序数）和从右向左读（称之为倒序数）是一样的，这样的数就叫回文数。输入两个整数m和n（m<n)，输出区间[m，n]之间的回文数。
#include<stdio.h>
int hw(int n)
{
    int result = 0;
    while (n != 0)
    {
        result = result * 10 + n % 10;
        n /= 10;
    }
    return result;
}
int main()
{
    int m, n, i;
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++)
    {
        if (i == hw(i))
            printf("%d ", i);
    }
    return 0;
}

//1107: 回文数猜想（函数专题）
//一个正整数，如果从左向右读（称之为正序数）和从右向左读（称之为倒序数）是一样的，这样的数就叫回文数。任取一个正整数，如果不是回文数，将该数与他的倒序数相加，若其和不是回文数，则重复上述步骤，一直到获得回文数为止。例如：68变成154（68+86），再变成605（154+451），最后变成1111（605+506），而1111是回文数。于是有数学家提出一个猜想：不论开始是什么正整数，在经过有限次正序数和倒序数相加的步骤后，都会得到一个回文数。至今为止还不知道这个猜想是对还是错。现在请你编程序验证之。你已经会写求一个整数的逆序数的函数inverse()，那么如下循环可以模拟回文数猜想的验证过程：
// while( m = inverse(n), m != n)
// {
// 输出n;
// 把n更新为 m + n;
// }
#include<stdio.h>
int inverse(int n)
{
    int result = 0;
    while (n != 0)
    {
        result = result * 10 + n % 10;
        n /= 10;
    }
    return result;
}
int main()
{
    int n, m;
    scanf("%d", &n);
    while (m = inverse(n), m != n)
    {
            printf("%d ", n);
            n += m;
    } 
    if(n = inverse(n))
        printf("%d ", n);
    return 0;
}

//1108: 打印数字图形（函数专题）
//从键盘输入一个整数n(1≤n≤9),打印出指定的数字图形。要求在程序中定义并调用函数PrintLine()来输出图形中的一行，该行中的最大数字是m，函数原型如下：
// PrintLine(int m)；
#include<stdio.h>
void PrintBlank(int m)
{
    int i;
    for (i = 1; i <= m; i++)
        printf(" ");
}
void PrintNum(int m)
{
    int i;
    for (i = 1; i < m; i++)
        printf("%d", i);
    for (i = m; i > 0; i--)
        printf("%d", i);
    printf("\n");
}
void PrintLine(int m)
{
    int i;
    for (i = 1; i < m; i++)
    {
        PrintBlank(m - i);
        PrintNum(i);
    }
    for (i = m; i > 0; i--)
    {
        PrintBlank(m - i);
        PrintNum(i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    PrintLine(n);
    return 0;
}

//1109: 数根（函数专题）
// 输入一个正整数，输出该数的数根。数根可以通过把一个数的各个位上的数字加起来得到。如果得到的数是一位数，那么这个数就是数根。如果结果是两位数或者包括更多位的数字，那么再把这些数字加起来。如此进行下去，直到得到是一位数为止。比如，对于24来说，把2和4相加得到6，由于6是一位数，因此6是24的数根。再比如39，把3和9加起来得到12，由于12不是一位数，因此还得把1和2加起来，最后得到3，这是一个一位数，因此3是39的数根。 要求使用函数，定义函数digitSum(int n)求n的各位数字和，其余功能在main()函数中实现。 
// int digitSum(int n) 
// { 
// //函数返回n的各位数字之和 
// } 
#include<stdio.h>
int digitSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    loop: if (digitSum(n) / 10 == 0)
        printf("%d", digitSum(n));
    else
    {
        n = digitSum(n);
        goto loop;
    }
    return 0;
}

//1110: 最近共同祖先（函数专题）
//如上图所示，由正整数1, 2, 3, ...组成了一棵无限大的二叉树。从某一个结点到根结 点（编号是1 的结点）都有一条唯一的路径，比如从10 到根结点的路径是(10, 5, 2, 1)， 从4 到根结点的路径是(4, 2, 1)，从该结点到根结点的路径上的所有结点称为该结点的祖先。现在的问题就是，给定x 和y，求x和y的最近共同祖先，比如，10和4最近共同祖先是2，10和5的最近共同祖先是5。 定义递归函数 
// int common(int x, int y) 
// { 
// 如果x==y, return x; 
// 如果x>y，求x/2与y的共同祖先; 
// 否则，求x与y/2的共同祖先; 
// }
#include<stdio.h>
int common(int x, int y);
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d\n", common(m, n));
	return 0;
}

int common(int x, int y)
{
	if (x == y)
		return x;
	if (x > y)
		return common(x / 2, y);
	return common(x, y / 2);
}

//1111: 多个整数的逆序输出（函数专题）
//输入n和n个整数，以与输入顺序相反的顺序输出这n个整数。要求不使用数组，而使用递归函数实现。递归函数实现过程如下：
// void inverse(int n)
// {
//     if(n >1)
//    {
//         (1) 读入一个整数，存入num;
//         (2)  将后面的n-1个数逆序输出: inverse(n-1);  
//         (3)  输出num；
//    }
//  if( n == 1)  直接输出num；   
// }
#include<stdio.h>
void inverse(int n)
{
    int num;
    if (n >1)
   {
       scanf("%d", &num);
       inverse(n - 1);
       printf("%d ", num);
   }
    if (n == 1)
    {
        scanf("%d", &num);
        printf("%d ", num);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    inverse(n);
    return 0;
}

//1112: 进制转换（函数专题）
//输入一个十进制整数n，输出对应的二进制整数。常用的转换方法为“除2取余，倒序排列”。将一个十进制数除以2，得到余数和商，将得到的商再除以2，依次类推，直到商等于0为止，倒取除得的余数，即为所求的二进制数。例如，把52换算成二进制数的计算过程如下图：52除以2得到的余数依次为0,0,1,0,1,1，倒序排列，得到52对应的二进制数110100。用递归的思想来描述上述计算过程是这样的：输出n/2对应的二进制数，然后输入%2。递归函数的实现过程如下：
// void convert(int n)
// {
//    if(n > 0)
//    {
//       调用自身，输出n/2对应的二进制数;
//        输出n%2;
//     }
// }
#include<stdio.h>
void convert(int n)
{
   if (n > 0)
    {
        convert(n / 2);
        printf("%d", n % 2);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    convert(n);
    return 0;
}

//1113: 递归调用的次数统计（函数专题）
//如下程序的功能是计算 Fibonacci数列的第n项。函数fib()是一个递归函数。请你改写该程序，计算第n项的同时，统计调用了多少次函数fib（包括main()对fib()的调用）。
// #include<stdio.h>
// int fib(int k);
// int main(void )
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d\n", fib(n));   
//     return 0;
// }
// int fib(int k)
// {
//     if(k == 1 || k == 2)
//         return 1;
//     else
//         return fib(k-1) + fib(k-2);
// }
#include<stdio.h>
int f = 0;
int fib(int k);
int main(void )
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    printf("递归调用了%d次", f);
    return 0;
}
int fib(int k)
{
    f++;
    if (k == 1 || k == 2)
        return 1;
    else
        return fib(k-1) + fib(k-2);
}

//1114: 逆序（数组）
//输入n（1<=n<=10）和n个整数，逆序输出这n个整数。
#include<stdio.h>
int main()
{
    int a[10] = { 0 };
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = n - 1; i >= 0; i--)
        printf("%4d", a[i]);
    return 0;
}

//1115: 数组最小值（数组）
//数组a有n个元素，请输出n个元素的最小值及其下标。若最小值有多个，请输出下标最小的一个。注意，有效下标从0开始。
#include<stdio.h>
int main()
{
    int a[1000] = { 0 };
    int i, n, min, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = a[0], j = 0;
    for (i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            j = i;
        }
    }
    printf("%d %d", min, j);
    return 0;
}

//1116: 删除元素（数组）
//输入一个递增有序的整型数组A有n个元素，删除下标为i的元素，使其仍保持连续有序。注意，有效下标从0开始。 定义如下两个函数分别实现删除元素操作和数组输出操作。
// void del(int a[], int n, int i);  /*删除数组a中下标为i的元素*/
// void PrintArr(int a[], int n); /*输出数组a的前n个元素*/
#include<stdio.h>
void del(int a[], int n, int i)
{
    int t;
    for (t = i; t < n - 1; t++)
    {
        a[t] = a[t + 1];
    }
}
void PrintArr(int a[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a[10] = { 0 };
    int i, n, ddel;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &ddel);
    del(a, n, ddel);
    PrintArr(a, n);
    return 0;
}

//1117: 查找数组元素（数组）
//编写程序，输入n（1<=n<=10),输入n个整数构成一个数组，输入整数x，在这个数组中查找x是否存在，如果存在，删除x，后面元素依次向前添补空位，并输出删除元素后的数组。如果不存在，输出“Not Found”。定义一个查找函数find(),在数组a中查找x，若找不到函数返回-1，若找到返回x的下标，函数原型如下：int find(int a[], int n, int x); 然后在main()中，先调用函数find(),若查找失败输出“Not Found"；若查找成功，则调用上一题中定义的函数del()删除该元素，再调用上一题中的PrintArr()输出删除元素后的数组内容。
#include<stdio.h>
void del(int a[], int n, int i)
{
    int t;
    for (t = i; t < n - 1; t++)
    {
        a[t] = a[t + 1];
    }
}
int find(int a[], int n, int x)
{
    int t, s = 0;
    for (t = 0; t < n; t++)
    {
        if (x == a[t])
        {
            s = t;
            return s;
        }
    }
    if(t >= n)
        return -1;
}
void PrintArr(int a[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
        printf("%4d", a[i]);
}
int main()
{
    int a[10] = { 0 };
    int i, n, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    if(find(a, n, x) != -1)
    {
        del(a, n, find(a, n, x));
        PrintArr(a, n);
    }
    else
        printf ("Not Found");
    return 0;
}

//1118: 有序数组的元素添加
//一个非递减有序的整型数组有n个元素，给定一个整数num，将num插入该序列的适当位置，使序列仍保持非递减有序。要求定义一个函数insert()，将整数num插入在数组a的适当位置上，函数原型如下：void insert(int a[], int n, int num);另外函数仍然调用以前定义过的函数PrintArr()输出数组所有元素。
#include<stdio.h>
void insert(int a[], int n, int num)
{
    int i, j;
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] > num)
            a[i + 1] = a[i];
        else
            break;
    }
    a[i + 1] = num;
}
void PrintArr(int a[], int n)
{
    int i, f = 0;
    if(f == 0)
    {
        printf("%d", a[0]);
        f = 1;
    }
    if(f != 0)
    {
    for (i = 1; i < n + 1; i++)
        printf(" %d", a[i]);
    }
}
int main()
{
    int a[1001] = { 0 };
    int i, n, num;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &num);
    insert(a, n, num);
    PrintArr(a, n);
    return 0;
}

//1119: 一维数组排序（数组）
//对一维数组按照从小到大的顺序排序。程序定义函数sort()来实现数组a的排序。函数原型如下：void  sort(int a[], int n);数组元素的输出调用PrintArr()。
#include<stdio.h>
void  sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}
void PrintArr(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a[10] = { 0 };
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, n);
    PrintArr(a, n);
    return 0;
}

//1120: 最值交换
//有一个长度为n的整数序列。请写一个程序，先把序列中的最小值与第一个数交换，再把最大值与最后一个数交换。输出转换好的序列。 分别编写两个函数MinIndex()和MaxIndex()来计算最小值下标和最大值下标。int MinIndex(int a[], int n);  //函数返回数组a中最小元素的下标int MaxIndex(int a[], int n);  //函数返回数组a中最大元素的下标数组元素的输出调用函数PrintArr()。
#include<stdio.h>
int MinIndex(int a[], int n)
{
    int i, m = 0, min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            m = i;
        }
    }
    return m;
}
int MaxIndex(int a[], int n)
{
    int i, s = 0, max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            s = i;
        }
    }
    return s;
}
void PrintArr(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a[10] = { 0 };
    int i, n;
    int t;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int smin = MinIndex(a, n);
    t = a[0]; a[0] = a[smin]; a[smin] = t;
    int smax = MaxIndex(a, n);
    t = a[n - 1]; a[n - 1] = a[smax]; a[smax] = t;
    PrintArr(a, n);
    return 0;
}

//1121: 电梯
//在某一高层建筑内只有一部电梯，当你按下一个数时，电梯会运行到那一层。已知电梯每上升一层需6秒，下降一层需4秒，在需要停留的那层停留5秒。现有N个整数组成的一个需求列表，电梯将依次响应，电梯从0层开始运行，而在运行过程结束之前不会返回0层。 注意，若出现相邻两个整数相等，代表在同一层执行了两个不同任务，可以理解为：电梯已经停了5秒，正要关门时又有人在同一层按开门键，电梯又开门并停留5秒。
