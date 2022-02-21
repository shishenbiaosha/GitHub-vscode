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
#include<stdio.h>
int main()
{
    int i, sum = 0, a[1000] = { 0 }, N;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
        scanf("%d", &a[i]);
    sum += 5 * N;
    for (i = 1; i <= N; i++)
    {
        if (a[i - 1] > a[i])
            sum += 4 * (a[i - 1] - a[i]);
        if (a[i] > a[i - 1])
            sum += 6 * (a[i] - a[i - 1]);
    }
    printf("%d", sum);
    return 0;
}

//1122: 小明的调查作业
//小明的老师布置了一份调查作业，小明想在学校中请一些同学一起做一项问卷调查，聪明的小明为了实验的客观性，想利用自己的计算机知识帮助自己。他先用计算机生成了N个1到1000之间的随机整数（0<N≤1000），对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作。
#include<stdio.h>
int main()
{
    int N, num, i, j, a[1000], t;
    scanf("%d", &N);
    num = N;
    for (i = 0; i < N; i++)
        scanf("%d",&a[i]);
    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }   
    }
    for (i = 0; i < N; i++)
    {
        if (a[i] == a[i + 1])
        {
            a[i] = 0;
            num = num - 1;
        }
    }
    printf("%d\n", num);
    for (i = 0; i < N; i++)
    {
        if (a[i] == 0)
            continue;
        else
            printf("%d ", a[i]);
    }
    // getchar();
    return 0;
}

//1123: 成绩排序
//给出班里某门课程的成绩单，请你按成绩从高到低对成绩单排序输出，如果有相同分数则名字字典序小的在前。
#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[21];
    int score;
}Stu;
int main()
{
    int n, i, j;
    Stu stu[20];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s%d", stu[i].name, &stu[i].score);
    Stu temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (stu[i].score < stu[j].score)
            {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (stu[i].score == stu[j].score)
            {
                if(strcmp(stu[i].name,stu[j].name) > 0)
                {
                    temp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = temp;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%s %d\n", stu[i].name, stu[i].score);
    return 0;
}

//1124: 两个有序数组合并
//已知数组a中有m个按升序排列的元素，数组b中有n个按降序排列的元素，编程将a与b中的所有元素按降序存入数组c中。
#include<stdio.h>//超时
void sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}
int a[1000000];
int main()
{
    int m, i, n, j;
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    for (i = m; i < m + n; i++)
        scanf("%d", &a[i]);
    sort(a, m + n);
    printf("%d", a[0]);
    for (i = 1; i < m + n; i++)
        printf(" %d", a[i]);
    return 0;
}

//1125: 上三角矩阵的判断
//编写程序，输入一个正整数n（1<=n<=10）和n阶方阵a中的元素，如果a是上三角矩阵，输出“YES”，否则，输出“NO”。 上三角矩阵即主对角线以下（不包括主对角线）的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。要求定义函数IsUpperTriMatrix()判断矩阵a是否是上三角矩阵，如果是返回1，否则返回0。函数原型如下：
//int IsUpperTriMatrix(int a[][], int n);
#include <stdio.h> 
int main() 
{  
    int a[10][10];
    int flag = 1, i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < i; j++)
            if (a[i][j] != 0)
                flag = 0;
    if (flag == 1)
        printf("YES");
    else
        printf("NO");
    return 0; 
}

//1126: 布尔矩阵的奇偶性
//一个布尔方阵具有奇偶均势特性，当且仅当 每行、每列总和为偶数，即包含偶数个1。如下面这个4*4的矩阵就具有奇偶均势特性：
// 1 0 1 0
// 0 0 0 0
// 1 1 1 1
// 0 1 0 1
// 编写程序，读入一个n阶方阵并检查它是否具有奇偶均势特性。如果没有，你的程序应当再检查一下它是否可以通过修改一位（把0改为1，把1改为0）来使它具有奇偶均势特性；如果不可能，这个矩阵就被认为是破坏了。定义并调用如下函数：
// //int BalanceMatrix(int a[], int n);
// 函数返回1表示该矩阵具有奇偶均势特性；函数返回2表示可以通过修改1位来达到奇偶均势；函数返回-1表示该矩阵被是破坏了，无法恢复。
#include<stdio.h>
int main()
{
    int n, i, j, x = 0, y = 0, flag1 = 1, flag2 = 1, num, count1 = 0, count2 = 0;
    int a[100][100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
    {
        num = 0;
        for (int j = 0; j < n; j++)
            if (a[i][j] == 1)
                num++;
        if (num % 2 != 0)
        {
            flag1 = 0;
            x = i;
            count1++;
        }
    }
    for (j = 0; j < n; j++)
    {
        num = 0;
        for (i = 0; i < n; i++)
            if (a[i][j] == 1)
                num++;
        if (num % 2 != 0)
        {
            flag2 = 0;
            y = j;
            count2++;
        }
    }
    if (flag1 && flag2 == 1)
        printf("OK");
    else if (count1 == 1 && count2 == 1)
        printf("Change bit(%d,%d)", x, y);
    else
        printf("Corrupt");
    return 0;
}

//1127: 矩阵乘积
//计算两个矩阵A和B的乘积。
#include<stdio.h>
int main()
{
    int m, p, n;
    int A[10][10], B[10][10], C[10][10];
    int i, j, o, sum;
    scanf("%d%d%d", &m, &p, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (j = 0; j < p; j++)
    {
        for (o = 0; o < n; o++)
        {
            scanf("%d", &B[j][o]);
        }
	}
    for (i = 0; i < m; i++)
    {
        for (o = 0; o < n; o++)
        {
            sum = 0;
            for (j = 0; j < p; j++)
            {
                sum += A[i][j] * B[j][o];
            }
            C[i][o] = sum;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (o = 0; o < n; o++)
        {
            printf("%d ", C[i][o]);
        }
        printf("\n");
    }
    return 0;
}

//1128: 课程平均分
//期末考试结束，班主任拿到了本班学生的成绩汇总表，由m行n列组成(本班共有m名学生，本学期有n门课程),每行是一个同学的n门课程成绩，请编写程序，计算并输出每门课的平均分，结果保留2位小数。
#include<stdio.h>
int main()
{
    int i, j, m, n;
    double y, sum = 0, a[1000][10];
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    for (j = 0; j < n; j++)
    {
        sum = 0;
        for (i = 0; i < m; i++)
        {
            sum = sum + a[i][j];
        }
        y = sum / m;
        if (j != n - 1)
            printf("%.2lf ", y);
        else
            printf("%.2lf", y);
    }
    return 0;
}

//1129: 第几天
//你知道，2012-1-1是该年的第1天，而9999-9-9呢？给你一个具体的日期，计算该日期是该年的第几天。
#include<stdio.h>
int main()
{
    int a, b, c, i, sum = 0, t;
    int d[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d-%d-%d", &a, &b, &c);
    if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        d[2] = 29;
    for (i = 1; i < b; i++)
    {
        sum += d[i];
    }
    t = sum + c;
    printf("%d", t);
    return 0;
}

//1130: 杨辉三角
//还记得中学时候学过的杨辉三角吗？具体的定义这里不再描述，你可以参考以下的图形： 
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1
#include<stdio.h>
#include<stdio.h>
int main()
{
    int a[30][30] = { 0 }, i, j, n;
    scanf("%d", &n);
    a[0][0] = a[1][0] = a[1][1] = 1;
    for (i = 2; i < n; i++)
    {
        a[i][0] = a[i][i] = 1;
        for (j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}

//1131: 最常用字符
//英文字母里出现频率最高的是哪个字母呢? 给定一个字符串，输出字符串中出现次数最多的字母。
#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    int max = 0, a[26] = {0}, i, f;
    while (scanf("%c", &ch), ch != '\n')
    {
        if (ch >= 'a' && ch <= 'z')
        {
            i = ch - 'a';
            a[i]++;
        }
        if(ch>='A'&&ch<='Z') 
        {
            i = ch - 'A';
            a[i]++;
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            f = i;
        }

    }
    printf("%c\n", f + 'a');
    return 0;
}

//1132: 数字字符统计(多实例)
//对于给定的一个字符串，统计其中数字字符出现的次数。字符串长度不超过1000.
#include<stdio.h>
#include<ctype.h>
int main()
{
    int i, n, sum;
    char ch;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        sum = 0;
        while (scanf("%c", &ch), ch != '\n')
        {
            if (isdigit(ch))
                sum++;
        }
        printf("%d\n", sum);
    }
    return 0;
}

//1133: 单词个数统计
//从键盘输入一行字符，长度小于1000。统计其中单词的个数，各单词以空格分隔，且空格数可以是多个。
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int i, len, count;
    gets(ch);
    count = 0;
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] != ' ' && ch[i + 1] == ' ')
            count++;
    }
    len = strlen(ch);
    if (ch[len - 1] != ' ')
        count++;
    printf("%d\n", count);
    return 0;
}

//1134: 字符串转换
//输入一个以回车结束的字符串，它由数字和字母组成，请过滤掉所有非数字字符，然后将数字字符串转换成十进制整数后乘以2输出。
#include<stdio.h>//运行错误
#include<ctype.h>
#include<string.h>
int main()
{
    int i, len, sum = 0;
    char str[101];
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (isdigit(str[i]))
            sum = sum * 10 + (str[i] - '0');
    }
    printf("%d\n", sum * 2);
    return 0;
}

//1135: 算菜价
//妈妈每天都要出去买菜，但是回来后，兜里的钱也懒得数一数，到底花了多少钱真是一笔糊涂帐。现在好了，作为好儿子（女儿）的你可以给她用程序算一下了，呵呵。
#include<stdio.h>
int main()
{
    double w, p, sum = 0;
    char str[100];
    while (scanf("%*s%lf%lf", &w, &p) != EOF)
    {
        sum += w * p;
    }
    printf("%.1lf", sum);
    return 0;
}

//1136: 首字母变大写
//输入一个只包含大小写英文字母和空格的句子，将每个单词的第一个字母改成大写字母。
#include<stdio.h>
#include<ctype.h>
int main()
{
    int i;
    char ch[100];
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (isalnum(ch[i]) && ch[i - 1] == ' ')
        {
            if (islower(ch[i]))
            {
                ch[i] = toupper(ch[i]);
            }
		}
	}
    if (islower(ch[0]))
        ch[0] = toupper(ch[0]);
    printf("%s\n", ch);
    return 0;
}

//1137: 查找最大元素
//对于输入的字符串，查找其中的最大字母，在该字母后面插入字符串“(max)”。
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int i, max, n;
    gets(str);
    n = strlen(str);
    max = str[0];
    for (i = 0; i < n; i++)
    {
        if (str[i] > max)
            max = str[i];
    }
    for (i = 0; i < n; i++)
    {
        if (str[i] == max)
            printf("%c(max)", str[i]);
        else
            printf("%c", str[i]);
    }
    return 0;
}

//1138: C语言合法标识符
//输入一个字符串，判断其是否是C的合法标识符。
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch[51], flag = 1;
    int i;
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
    {
        if (i == 0 && isdigit(ch[i]))
        {
            flag = 0;
            continue;
        }
        if (! ((ch[i] >= '0' && ch[i] <= '9') || (ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] > 'A' && ch[i] <= 'Z') || ch[i] == '_'))
        {
            flag = 0;
            continue;
        }	
    }
    if (flag == 1)
        printf("yes");
    else
        printf("no");
    return 0;
}

//1139: 输出最短字符串
//输入n和n个字符串，输出其中最短的字符串。若长度相同则输出出现较早的那一个。
#include<stdio.h>
#include<string.h>
int main()
{
    int n, i;
    char a[1000], min[1000];
    scanf("%d", &n);
    getchar();
    gets(a);
    strcpy(min, a);
    for (i = 0; i < n; i++)
    {
        gets(a);
        if (strlen(a) < strlen(min))
            strcpy(min, a);
    }
    printf("%s", min);
    return 0;
}

//1140: 小数点后第n位(多实例)
//给你一个小数x，让你算出小数点后第n位是什么，1 <= n <= 6。
#include<stdio.h>
#include<string.h>
int main()
{
    int n, t, i, j;
    char a[100];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%s%d", a, &n);
        for (j = 0; a[j] != '\0'; j++)
        {
            if (a[j] == '.')
                break;
        }
        if ((j + n) >= strlen(a))
            printf("0\n");
        else
            printf("%c\n", a[j + n]);
    }
    return 0;
}

//1141: 进制转换
//将十进制整数n转换成二进制，并保存在字符数组中，最后输出。要求定义并调用convert()函数, 将十进制整数n对应的二进制数存入字符数组str中。
// void convert(int n, char str[]);
#include<stdio.h>
#include<string.h>
void convert(int n, char str[])
{
    int len = 0;
    for (int i = 0; n != 0; i++)
    {
        str[i] = n % 2 + '0';
        n /= 2;
    }
    len = strlen(str);
    for (int j = len - 1; j >= 0; j--)
    {
        printf("%c", str[j]);
    }
}
int main()
{
    int n;
    int m = 0;
    char str[1001];
    scanf("%d", &n);
    if (n == 0)
        printf("%d", m);
    convert(n, str);
    return 0;
}

//1142: 二进制数的大小
//输入三个2 进制的数，要求将这三个二进制数对应的十进制整数按从小到大的顺序输。 要求程序定义一个bToD()函数和一个main()函数，bToD() 函数的功能是将二进制数转化为十进制整数，其余功能在main()函数中实现。 
// int bToD(char str[]) 
// {
// //函数返回二进制数str对应十进制整数 
// }
#include <stdio.h>
#include <string.h>
int bToD(char str[])
{
    int i = 0, sum = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        sum = sum * 2 + (str[i] - '0');

    }
    return sum;
}
int main()
{
    char str[30];
    int temp, s[30], i, j;
    for (i = 0; i < 3; i++)
    {
        scanf("%s", str);
        s[i] = bToD(str);
    }
    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d ", s[i]);
    }
    return 0;
}

//1143: 最大值—多种进制
//输入n个数，每个数的进制由其后面的数字k指定，k>=2且k<=10， 输出最大的数对应的十进制数。 要求程序定义一个KTod()函数和一个main()函数，KToD() 函数的功能是将k进制数转化为十进制整数，其余功能在main()函数中实现。 
// int KToD(char str[], int k) 
// { 
// //函数返回k进制数str对应十进制整数 
// }
#include<stdio.h>
#include<string.h>
#define N 50
int KTOD (int k,char str[])
{
    int i, d = 0;
    for (i = 0; str[i] != '\0'; i++)
        d = d * k + (str[i] - '0');
    return d;
}
int sort(int num, int a[])
{
    int i, j, max, temp;
    for (i = 0; i < num - 1; i++)
    {
        for (j = i + 1; j < num; j++)
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
			}
	}
    max = a[num - 1];
    return max;
}
int main ()
{
    int n, k, num, i = 0, j, max;
    char str[N];
    int a[N];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", str);
        scanf("%d", &k);
        a[i++] = KTOD(k, str);
    }
    num = i;
    max = sort(num, a);
    printf("%d", max);
}

//1144: 多种进制
//输入一个十进制整数n，转换成2、3、7、8进制输出 要求程序定义一个dToK()函数，功能是将十进制数转化为k进制整数，其余功能在main()函数中实现。 
// void dToK(int n, int k, char str[]) 
// { 
// //将n转化为k进制数，存入str 
// }
#include<stdio.h>
void dToK(int n, int k, char str[])
{
    int i, len;
    for (i = 0; n != 0; i++)
    {
        str[i] = n % k + '0';
        n /= k;
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    char str[1000];
    scanf("%d", &n);
    dToK(n, 2, str);
    dToK(n, 3, str);
    dToK(n, 7, str);
    dToK(n, 8, str);
    return 0;
}

//1145: 有问题的里程表（2）
//某辆汽车有一个里程表，该里程表可以显示一个整数，为该车走过的公里数。然而这个里程表有个毛病：它总是从3变到5，而跳过数字4，里程表所有位（个位、 十位、百位等）上的数字都是如此。例如，如果里程表显示15339,汽车走过1公里之后，该里程表显示15350。
#include<stdio.h>
#include<string.h>
int main()
{
    int i, t = 0;
    char a[10];
    scanf("%s", a);
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] > '4')
            a[i]--;
        t = t * 9 + (a[i] - '0');
    }
    printf("%d",t);
    return 0;
}

//1146: 吃糖果
//HOHO，终于从Speakless手上赢走了所有的糖果，是Gardon吃糖果时有个特殊的癖好，就是不喜欢连续两次吃一样的糖果，喜欢先吃一颗A种类的糖果，下一次换一种口味，吃一颗B种类的糖果，这样；可是Gardon不知道是否存在一种吃糖果的顺序使得他能把所有糖果都吃完？请你写个程序帮忙计算一下。 
#include<stdio.h>
int main()
{
    int i, j, T, N, Mi, sum, max;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        sum = max = 0;
        scanf("%d", &N);
        for (j = 0; j < N; j++)
        {
            scanf("%d", &Mi);
            sum += Mi;
            if (Mi > max)
                max = Mi;
        }
    //剩下的糖果总数sum-max大于最多的哪一种中间的空max-1，说明可以实现不重复排列
    if (max - 1 <= sum - max)
        printf("Yes\n");
    else
        printf("No\n");
    }
    return 0;
}

//1147: 查找子数组
//给定两个整型数组，数组a有n个元素， 数组b有m个元素，1<=m<=n<100,请检验数组b是否是数组a的子数组。若从数组a的某个元素a[i]开始，有b[0]=a[i],b[1]=a[i+1],......，b[m]=a[i+m]，则称数组b是数组a的子数组。
#include<stdio.h>
int main()
{
    int i, j, n, m, k, f, c = 0;
    int a[100], b[100];
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < n; i++)
    {
        f = 1;
        if (b[0] == a[i])
        {
            for (j = 1; j < m; j++)
            {
                if (b[j] != a[i + j])
                {
                    f = 0;
                    break;
                }
            }
            if (f == 1)
            {
                c = 1;
                printf("%d\n", i);
            }
        }
    }
    if (c == 0)
        printf("No Answer\n");
    return 0;
}

//1148: 组合三位数之一
//把1、2、3、4、5、6、7、8、9组合成3个3位数，要求每个数字仅使用一次，使每个3位数均为完全平方数。按从小到大的顺序输出这三个三位数。
#include<stdio.h>
int main()
{
    printf("361 ");
    printf("529 ");
    printf("784");
    return 0;
}

//1149: 组合三位数之二
//把1，2，3，4，5，6，7，8，9，组成三个三位数（每个数只能用一次）,第二个数是第一个数的2倍，第三个数是第一个数的3倍，这三个三位数各是多少？答案可能有很多组，请按第一个数的升序顺序输出每组的三个三位数。
#include<stdio.h>
#include<string.h>
//判断这个三位数是否有重复的数字,没有重复返回1,个位十位不为0
int doub(a)
{
    if ((a % 10 != a / 100) && (a / 100 != a / 10 % 10) && (a % 10 != a / 10 % 10) && a % 10 != 0 && a / 10 % 10 != 0)
        return 1;
    return 0;
}
//判断两个三位数是否有重复的数字,没有重复返回1
int Isrepeat(a,b){
    if (b % 10 == a % 10 || b % 10 == a / 10 % 10 || b % 10 == a / 100)
        return 0;
    if (b / 10 % 10 == a % 10 || b / 10 % 10 == a / 10 % 10 || b / 10 % 10 == a / 100)
        return 0;
    if (b / 100 == a % 10 || b / 100 == a / 10 % 10 || b / 100 == a / 100)
        return 0;
    return 1;
}
int main()
{
    int a[50];
    for (int i = 123; i < 330; i++)
    {
        //三个数各自没有重复的数字
        if (doub(i) && doub(2 * i) && doub(3 * i))
        {
            //三个数都没有重复的数字
            if (Isrepeat(i, 2 * i) && Isrepeat(2 * i, 3 * i) && Isrepeat(i, 3 * i))
            {
                printf("%d %d %d\n", i, 2 * i, 3 * i);
            }
        }
    }
    return 0;
}

//1150: 数数多少个整数
//小明的老师给小明出了一道题目：数数一篇文章出现了多少个数字，请你帮帮他吧。
#include<stdio.h>
int main()
{
    char a[1000];
    int i, n = 0, f = 0;
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '0' && f == 0)
            n++;
        if (a[i] > '0' && a[i] <= '9' && f == 0)
        {
            n++;
            f = 1;
        }
        if (a[i] == ' ' || a[i] > '9')
            f = 0;
    }
    printf("%d\n", n);
    return 0;
}

//1151: 大整数加法
//比利经常会碰到超大整数的加法运算，而普通的计算器上无法进行。因此他想你帮他写一个程序来计算结果。

//1152: 二分搜索
//在有序序列中查找某一元素x。
#include<stdio.h>
int a[100000];
int find(int a[], int n, int x)
{
    int low = 0, hight = n - 1, mid;
    while(low<=hight)
    {
        mid = (low + hight) / 2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] < x)
            low = mid + 1;
        else if (a[mid] > x)
            hight = mid - 1;
    }
    return -1;
}
int main()
{
    int n, i, m, x, k;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    while(m--)
    {
        scanf("%d", &x);
        k = find(a, n, x);
        if (k == -1)
            printf("Not found!\n");
        else
            printf("%d\n", k);
    }
    return 0;
}

//1153: 简易版最长序列(多实例)
//给你一组数(未排序)，请你设计一个程序：求出里面个数最多的数。并输出这个数的长度。 例如：给你的数是：1、 2、 3、 3、 4、 4、 5、 5、 5 、6, 其中只有6组数：1, 2, 3-3, 4-4, 5-5-5 and 6. 最长的是5那组，长度为3。所以输出3。 
#include<stdio.h>
int find(int a[], int n, int x)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
            sum++;
    }
    return sum;
}
int main()
{
    int i, j, t, n, a[10000], f, max;
    scanf("%d", &t);
    while(t--)
	{
        max = -1;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
        {
            f = find(a, n, a[i]);
            if (f > max)
                max = f;
        }
        printf("%d\n", max);
    }
    return 0;
}

//1154: 校门外的树
//某校大门外长度为L 的马路上有一排树，每两棵相邻的树之间的间隔都是1 米。我们可以把马路看成一个数轴，马路的一端在数轴0 的位置，另一端在L 的位置；数轴上的每个整数点，即0，1，2，……，L，都种有一棵树。 由于马路上有一些区域要用来建地铁。这些区域用它们在数轴上的起始点和终止点表示。已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。现在要把这些区域中的树（包括区域端点处的两棵树）移走。你的任务是计算将这些树都移走后，马路上还有多少棵树。
#include<stdio.h>
int main()
{
    int n, l, m, i, j, a, b, sum = 0;
    scanf("%d", &n);
    while(n--)
    {
        sum = 0;
        int t[10000] = {0};
        scanf("%d%d", &l, &m);
        for (i = 0; i < m; i++)
        {
            scanf("%d%d", &a, &b);
            for (j = a; j <= b; j++)
            {
                t[j]++;
            }
        }
        for (i = 0; i <= l; i++)
        {
            if (t[i] != 0)
                sum += 1;
        }
        printf("%d\n", l + 1 - sum);
    }
    return 0;
}

//1155: 字符串比较（多实例）
//比较字符串大小，但比较的规则不同字典序规则。字符比较新规则如下：A < a < B < b < ………… < Z < z。
#include<stdio.h>
#include<string.h>
int main()
{
    int m, n, i, max;
    char a[10000] = {0}, b[10000] = {0};
    while (scanf("%s%s", a, b) != EOF)
    {
        m = strlen(a);
        n = strlen(b);
        if (strcmp(a, b) == 0)
            printf("NO\n");
        else
        {
            max = m > n ? m : n;
            for (i = 0; i < max; i++)
            {
                if (a[i] == b[i])
                    continue;
                else
                {
                    if ((a[i] >= 'a' && a[i] <= 'z' && b[i] >= 'a' && b[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z' && b[i] >= 'A' && b[i] <= 'Z'))
                    {
                        if (a[i] < b[i])
                        {
                            printf("YES\n");
                            break;
                        }
                        else
                        {
                            printf("NO\n");
                            break;
                        }
                    }
                    else if (a[i] >= 'a' && a[i] <= 'z' && b[i] >= 'A' && b[i] <= 'Z')
                    {
                        if (a[i] - 32 < b[i])
                        {
                            printf("YES\n");
                            break;
                        }
                        else
                        {
                            printf("NO\n");
                            break;
                        }
                    }
                    else if (a[i] >= 'A' && a[i] <= 'Z' && b[i] >= 'a' && b[i] <= 'z')
                    {
                        if (a[i] + 32 <= b[i])
                        {
                            printf("YES\n");
                            break;
                        }
                        else
                        {
                            printf("NO\n");
                            break;
                        }
                    }
                    else
                    {
                        if (a[i] < b[i])
                        {
                            printf("YES\n");
                            break;
                        }
                        else
                        {
                            printf("NO\n");
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0; 
}

//1156: 单数变复数
//输入一个名词英语单词，按照英语语法规则把单数变成复数。规则如下： （1） 以辅音字母y结尾，变y为i，再加es； （2） 以s, x, ch, sh结尾，则加es； （3） 以元音o结尾，则加es； （4） 其他情况加上s。
#include<stdio.h>
#include<string.h>
int main()
{
    char x[20];
    scanf("%s", x);
    int flag, len = strlen(x);
    if (x[len - 1] == 'o')
    {
        printf("%ses", x);
    }
    else
        if (x[len - 1] == 'y')
        {
            x[len - 1] = 'i';
            printf("%ses", x);
        }
        else if (x[len - 1] == 's' || x[len - 1] == 'x' || (x[len - 1] == 'h' && (x[len - 2] == 'c' || x[len - 2] == 's')))
        {
            printf("%ses", x);
        }
        else
        {
            printf("%ss", x);
    }
    return 0;
}

//1157: 连续的n个1
//计算机数据都是由0和1组成的，看着长长的0101001110101111011，要找出连续n个1的子串有多少个，确实麻烦，请你编程实现吧。
#include<stdio.h>
#include<string.h> 
int main()
{
    int i, n, t = 0, j, m = 0, k;
    char str[1000];
    scanf("%s", str);
    k = strlen(str);
    scanf("%d", &n);
    for (i = 0; i < k - n + 1; i++)
    {
        t = 0;
        for (j = 0; j < n; j++)
        {
            if (str[i + j] != '1')
                t = t;
            else
                t += 1;
            if (t == n)
            {
                m++;
            }
        }
    }
    printf("%d", m);
    return 0;
}

//1158: 又是排序（指针专题）
//将输入的四个整数按由大到小的顺序输出。 已定义如下swap函数，可实现形参pa和pb所指内存单元的内容交换。请务必使用本函数实现两个变量内容的互换。 
// void swap( int *pa, int *pb) 
// { 
// int t; 
// t=*pa; *pa=*pb; *pb=t; 
// } 
#include <stdio.h>
void swap(int *pa, int *pb)
{
    int t;
    t = *pa;
    *pa = *pb;
    *pb = t;
}
int main()
{
    int i, j, a[4];
    for (i = 0; i < 4; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (a[i] < a[j])
                swap(&a[i], &a[j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        if (i == 0)
            printf("%d", a[i]);
        else
            printf(" %d", a[i]);
    }
    return 0;
}

//1159: 最大的两个数（指针专题）
//求n个整数中的最大的两个元素。要求定义一个函数LargestTow()，求数组a的最大的两个元素，分别存入形参指针pfirst和psecond所指存储单元，函数原型如下：
// void LargestTow(int a[],int n,int *pfirst,int *psecond) 
// { 
// /*数组a有n个元素，将数组中的最大值存入形参指针pfirst所指内存单元，将数组中第二大的值存入形参指针psecond所指内存单元。 */
// }
#include<stdio.h>
#include<limits.h>
void LargestTow(int a[],int n,int *pfirst,int *psecond)
{
    int t, i, j;
    *pfirst = INT_MIN;
    *psecond = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (a[i] > *pfirst)
        {
            *pfirst = a[i];
            j = i;
        }

    }
    for (i = 0; i < n; i++)
    {
        if (i == j)
            continue;
        if (a[i] > *psecond)
            *psecond = a[i];
    }
    if (*pfirst < *psecond)
    {
        t = *pfirst;
        *pfirst = *psecond;
        *psecond = t;
    }
}
int main()
{
    int n, i = 0, j;
    scanf("%d", &n);
    j = n;
    int a[n], *pfirst, *psecond, maxf, maxs;
    pfirst = &maxf, psecond = &maxs;
    while(j--)
        scanf("%d", &a[i++]);
    LargestTow(a, n, pfirst, psecond);
    printf("%d %d", maxf, maxs);
    return 0;
}

//1160: 矩阵的最大值（指针专题）
//找出一个2×3的整数矩阵中的最大值及其行下标和列下标，要求调用函数FindMax(int p[][3], int m, int n, int *pRow, int *pCol)实现，行下标和列下标在形参中以指针的形式返回。 
// void FindMax(int p[][3], int m, int n, int *pRow, int *pCol)
// { 
// //在m*n矩阵p中查找最大值，将其行下标存入pRow所指内存单元，将其列下标存入pCol所指内存单元 
// } 
#include<stdio.h>
void FindMax(int p[][3], int m, int n, int *pRow, int *pCol)
{

    int i, j, max, x = 0, y = 0;
    max = p[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (p[i][j] > max)
            {
                max = p[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("%d %d %d\n", max, x, y);
}
int main()
{
    int a[2][3];
    int i, j, max;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    FindMax(a, 2, 3, &i, &j);
    return 0;
}

//1161: 字符串长度（指针专题）
//编写一函数len，求一个字符串的长度，注意该长度不计空格。要求用字符指针实现。在主函数中输入字符串，调用该len函数后输出其长度。 
// int len(char *sp) 
// { 
// //实现sp所指串的长度，不计空格。 
// } 
#include<stdio.h>
int len(char *sp) 
{
    int count = 0;
    while (*sp != '\0')
    {
        if (*sp != ' ')
        {
            count++;
        }
        sp++;
    }
    return count;
}
int main()
{
    char str[100];
    gets(str);
    printf("%d", len(str));
    return 0;
}

//1162: 循环移动（指针专题）
//有n个整数，使前面各数顺序向后移动k个位置，移出的数再从开头移入。输出移动后的数组元素。 题目没有告诉你n的范围，希望你读入n之后用malloc()函数动态申请内存空间，不要提前定义数组的大小。不要偷懒哦。 另外要求定义并使用函数ringShift() 
// void ringShift(int *a, int n, int k) 
// { 
// //循环移动后的数值仍然存入数组a中 
// }
#include<stdio.h>
#include<stdlib.h>
void ringShift(int *a, int n, int k)
{
    int *b, i;
    b = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        if (i + k < n)
        {
            b[i + k] = a[i];
        }
        else
        {
            b[i + k - n] = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    free(b);
}
int main()
{
    int n, k, i;
    scanf("%d", &n);
    int *a;
    a = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    ringShift(a, n, k);
    free(a);
    return 0;
}

//1163: 亲和串（字符串）
//判断亲和串。亲和串的定义是这样的：给定两个字符串s1和s2,如果能通过s1循环移位，使s2包含在s1中，那么我们就说s2 是s1的亲和串。
#include<stdio.h>
#include<string.h> 
int main()
{
    char s1[200000], s2[100000], s3[100000];
    int i, len1, len2;
    while (scanf("%s%s", s1, s2) != EOF)
    {
        len1 = strlen(s1);
        len2 = strlen(s2);
        if (len1 < len2)
            printf("no\n");
        else
        {
            strcpy(s3, s1);
            strcat(s1, s3);
            if (strstr(s1, s2) != NULL)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}

//1164: 在线判题（字符串）
//LittleTom开发了一个在线判题系统，判题系统需要把用户提交上来的代码编译成可执行文件，然后运行。而用户会提交什么样的代码是无法预知的，所以LittleTom做了充分的准备，比如阻止解题程序访问文件系统、阻止解题程序访问注册表、阻止解题程序修改系统设置、阻止解题程序关闭系统、阻止解题程序超限或非法使用内存、阻止解题程序的运行时间超过设定时间等。这些工作LitteTom都已完成。还有一个待解决的问题是判断解题程序的正确性。判题系统需要把解题程序产生的输出文件和正确的输出文件进行比较，如果两个文件完全相同，则判题系统返回“Accepted”，否则，如果两个文件除了空白符(空格' ', 制表符'\t', 或 回车符'\n')之外其余内容都相同，则判题系统返回“Presentation Error”，否则判题系统返回“Wrong Answer”。给定两个文件，一个代表正确输出，一个代表用户的解题程序的输出，你的任务是计算判题系统应该返回什么信息。

//1165: 实数的小数部分（指针专题）
//读入一个实数，输出该实数的小数部分，小数部分若多余的末尾0，请去掉。如输入111111.12345678912345678900 则输出0.123456789123456789。若去掉末尾0之后小数部分为0，则输出“No decimal part”。注意该实数的位数不超过100位。 请定义并使用如下函数。 
// char *decimal(char *p) 
// { 
// 将字符串p表示的实数的自小数点开始的小数部分存入一个字符串，并由函数返回，若p为“123.456”，则返回的字符串为“.456”。若小数部分为0,返回空指针NULL。 
// } 
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i, len, point, n, k = 1;
    gets(a);
    len = strlen(a);
    for(i = 0; i < len; i++)
    {
        if(a[i] == '.')
        {
            point = i;
            break;
        }
    }
    if(a[len - 1] != '0')
    {
        printf("0");
        for(i = point; i < len; i++)
            printf("%c",a[i]);
    }
    else
    {
        for(i = len - 1; i > point; i--)
        {
            if(a[i] == '0')
                k++;
            else
                break;
        }
        printf("0");
        for(i = point; i <= len - k; i++)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}

//1166: 实数取整（指针专题）
//读入一个实数，输出实数的整数部分。注意该实数的位数不超过100位。输入的整数部分可能含有不必要的前导0，输出时应去掉，当然，若整数部分为0，则该0不能去掉。如输入0023.56732，输出应为23，而不是0023；0.123对应的输出应为0。当然输入也可能不含小数部分。 要求定义并使用rounding()函数，原型如下： 
// char *rounding(char *p) 
// { 
// //将字符串p表示的实数取整后生成新的字符串，并由函数返回 
// } 
#include<stdio.h>
#include<string.h>
char *rounding(char *p)
{
    int i, len, k, flag = 0;
    char *r;
    len = strlen(p);
    for (i = 0; i < len; i++)
    {
        if (*(p + i) == '.')
        {
            k = i;
            *(p + k) = '\0';
        }
        else
            k = i;
    }
    for (i = 0; i < k; i++)
    {
        if (*(p + i) == '0')
            flag++;
        else
            break;
    }
    r = p + flag;
    return r;
}
int main()
{
    char str[101], *q;
    gets(str);
    q = rounding(str);
    printf("%s\n", q);
    return 0;
}

//1167: 逆转数（指针专题）
//任意给你一个整数，这个数可能很大（最长不超过100位），你能求出它的逆转数吗？ 逆转数定义如下： 1.一个末尾没有0的整数，它的逆转数就是各位数字逆序输出； 2.一个负数的逆转数仍是负数； 3.一个末尾有0的整数，它的逆转数如同下例： reverse (1200) = 2100 reverse (-56) = -65 要求定义并使用如下函数： 
// void reverse(char *str) 
// { 
// //函数求出str的逆转数并存入str。 
// } 
#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
	int left = 0, right, len = strlen(str), i, j;
	char t;
	if (*str == '-')
		left = 1;
  	for (i = len - 1; i >= 0; i--)
    {
        if(*(str + i) != '0')
        {
            right = i;
            break;
        }
    }   
	for(i = left, j = right; i <= (right + left) / 2; i++, j--)
	{
		t = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = t;
	}
}
int main()
{
	char str[101];
	gets(str);
	reverse(str);
	puts(str);
	return 0;
}

//1168: 账单（指针专题,多实例）
//每到月末，小明就会对这个月的支出账单进行整理和统计。如今电脑已经普及大学校园，所以小明想让电脑帮忙做这件事情。聪明的你就为小明编一个程序来完成这件事情吧。
#include<stdio.h>
#include<string.h>
int main()
{
    int ncase, n, i;
    double price, count = 0;
    char s[100], *p;
    scanf("%d", &ncase);
    while (ncase--)
    {
        scanf("%d", &n);
        getchar();
        count = 0;
        while (n--)
        {
            gets(s);
            p = strrchr(s, ' ');
            sscanf(p, "%lf", &price);
            count += price;
        }
        printf("%.1f\n", count);
    }
	return 0;
}

//1169: 大整数（指针专题）
//输入3个大整数，位数不超过100位，按从小到大的顺序输出这三个整数。要求定义并使用如下函数比较两个大整数的大小。 
// int cmp(char *a,char *b) 
// { 
// //若大整数a大于b，返回1； 
// //若a小于b，返回-1； 
// // 若a与b相等，返回0 
// }
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(char *a, char *b)
{
    int length1 = strlen(a);
    int length2 = strlen(b);
    if (length1 > length2)
    {
        return 1;
    }
    else if (length1 < length2)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < length1; i++)
        {
            if (*(a + i) < *(b + i))
            {
                return -1;
            }
            else if (*(a + i) > *(b + i))
            {
                return 1;
            }
        }
        return 0;
    }
}

int main()
{
    char *p[3], temp[101];
    for (int i = 0; i < 3; i++)
    {
        p[i] = (char *)malloc(sizeof(char) * 101);
        scanf("%s", p[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (cmp(p[i], p[j]) > 0)
            {
                strcpy(temp, p[i]);
                strcpy(p[i], p[j]);
                strcpy(p[j], temp);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        puts(p[i]);
    }
    return 0;
}

//1170: 最长字符串（指针专题）
//输入多个字符串，输出最长字符串。要求定义并使用函数maxLenStr()， 
// void maxLenStr(char *str[], int n, int *max) 
// { 
// 从字符串数组str中找出最长的一个字符串，并将其下标存入形参指针max所指内存。 
// }
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int maxLenStr(char *str[], int n)
{
    int i, len, max, maxi;
    max = strlen(str[0]);
    maxi = 0;
    for (i = 1; i <= n; i++)
    {
        len = strlen(str[i]);
        if (len > max)
        {
            max = len;
            maxi = i;
        }
	}
    return maxi;
}
int main()
{
    char *str[101], ch[4] = {'*', '*', '*', '*'};
    int max, i, n = 0;
    for (i = 0; ; i++)
    {
        str[i] = (char *)malloc(81 * sizeof(char));
        gets(str[i]);
        n++;
        if (strcmp(str[i], ch) == 0)
            break;
    }
    n = n - 1;
    max = maxLenStr(str, n);
    printf("%s\n", str[max]);
    return 0;
}

//1171: 加密（指针专题）
//将一段明文加密。加密的规则如下：将每个字符的ascii码的值减去24作为每个字符加密后的值，例如'a'的ascii码的值为97，那么加密后就变成了73。"73"就是'a'的密文，例如，字符串"abc"，在加密之后变为"737475"，最后，整个密文再进行翻转，得到最终的密文"574737"。现在请你编写程序，对一段文字加密。请定义并使用如下函数： 
// void encrypt(char *plain, char *cipher) 
// { 
// //把原文字符串plain加密后存入字符串cipher 
// } 
#include<stdio.h>
#include<string.h>
void encrypt(char *plain, char *cipher)
{
    int l;
    l = strlen(plain);
    int i;
    for (i = 0; i <= l - 1; i++)
    {
        cipher[i] = plain[i] - 24;
        printf("%d%d", cipher[i] / 10, cipher[i] % 10);
    }
	printf("\n");
}
int main()
{
    char p[200], c[200];
    gets(p);
    encrypt(p, c);
    return 0;
}

//1172: 矩阵边界和（指针专题）
//给定一个m行n列的二维矩阵，求其四周边元素和。1<=m、n<=100000，可能是1行100000列，也可能是10000行50列，但保证矩阵元素不多于500000。你可能不能预定义数组的大小了，你要学会使用动态内存分配哦。你可以动态申请m*n个内存单元，然后用一维数组来存储二维数组，二维数组元素a[i][j]对应一维数组a[i*n+j]，i、j均从0开始。
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int *p;
    int sum = 0;
    p = (int *)calloc(m * n, sizeof(int));
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &p[i * n + j]);
        }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i == 0) || (j == 0) || (i == m - 1) || (j = n - 1))
                sum += p[i * n + j];
        }
   }
   printf("%d", sum);
   free(p);
   return 0;
}

//1173: 密码解密（指针专题）
//有加密当然也有解密啦。那我们来解密吧。已知明文中只有数字和字母，且加密的规则如下：将每个字符的ascii码的值减去24作为每个字符加密过后的密文，例如'a'的ascii码的值为97，那么加密后就变成了73。"73"就是'a'的密文。所以，若密文是“757392”，则解密后的原文是“cat”。现在请你编写程序，将一段密文解密为原文。请定义并使用如下函数 
// void decrypt(char *cipher, char *plain) 
// { 
// //将密文cipher解密后将明文存入plain 
// } 
#include<stdio.h>
#include<string.h>
void decrypt(char *cipher,char *plain)
{
    int i, j = 0;
    for (i = 0; cipher[i] != '\0'; i = i + 2)
    {
        plain[j++] = (cipher[i] - '0') * 10 + (cipher[i + 1] - '0') + 24;
    }
    plain[j] = '\0';
}
int main()
{
    char cipher[200], plain[200];
    gets(cipher);
    decrypt(cipher, plain);
    puts(plain);
    return 0;
}

//1174: 长整数排序（指针专题）
//长整数排序。输入n 然后输入n个位数不超过100位的大整数，输入的整数可能含有前导0。将这n个长整数排序后输出，输出不含前导0。 
// int greater(char *s1, char *s2) 
// { 
// 若s1指向的整数大于s2指向的整数，返回一个正整数; 
// 若s1指向的整数小于s2指向的整数，返回负整数; 
// 若s1指向的整数等于s2指向的整数，返回0; 
// } 
#include<stdio.h>
#include<string.h>
int main()
{
    int n, b, i, j, k, s[15], flag = 0;
    char str[15][105], str1[105] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        s[i] = strlen(str[i]);
        flag = 0;
        for (j = 0; j < s[i]; j++)
        {
            if (str[i][j] != '0')
                break;
            if (str[i][j + 1] == '\0')
                break;
            else
            {
                b = j;
                flag = 1;
            }
        }
        if (flag == 1)
        {
            s[i] = s[i] - b - 1;
            for (k = 0; k < s[i]; k++)
                str1[k] = str[i][b + 1 + k];
            strcpy(str[i], str1);
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i] > s[j])
            {
                strcpy(str1, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], str1);
            }
            else if (s[i] == s[j])
            {
                for (int k = 0; k < s[i]; k++)
                {
                    if (str[i][k] > str[j][k])
                    {
                        strcpy(str1, str[i]);
                        strcpy(str[i], str[j]);
                        strcpy(str[j], str1);
                    }
                }
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%s\n", str[i]);
    return 0;
}

//1175: 矩阵转置（指针专题）
//给定一个m行n列的二维矩阵，输出其转置矩阵。1<=m、n<=100000，可能是1行100000列，也可能是10000行50列。你可能不能预定义数组的大小了，你要学会使用动态内存分配哦。
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, m, n, **a;
    scanf("%d%d", &m, &n);
    a = (int **) malloc(sizeof(int *) * m);
    for (i = 0; i < m; i++)
        a[i] = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < m; i++)
        free(a[i]);
    free(a);
    return 0;
}

//1176: 查找最大字符串（指针专题）
//从键盘上输入多个字符串（每个串不超过5个字符且没有空格），用”*****”作为串输入结束的标记。从所输入的若干字符串中，找出一个最大的串，并输出该串。要求最大串的查找通过调用编写的函数实现 
// void find(char *name[], int n, int *p) 
// { 
// //在包含n个字符串的二维字符数组name中，查找值最大的字符串，将其下标存入指针p所指内存单元 
// } 
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
void find(char* name[], int n, int* p)
{
    int i, imax = 0;
    char max[10];
    strcpy(max, name[0]);
    for (i = 0; i < n; i++)
    {
        if (strcmp(max, name[i]) < 0)
        {
            strcpy(max, name[i]);
            imax = i;
        }
    }
    *p = imax;
}
int main()
{
    int i = 0, f = 0;
    char *str[20];
    for(i = 0; ;i++)
    {
        str[i] = (char*)malloc(sizeof(char) * 10);
        scanf("%s", str[i]);
        if (strcmp(str[i], "*****") == 0)
            break;
    }
    find(str, i, &f);
    puts(str[f]);
    free(str[i]);
    return 0;
}

//1177: 按要求排序（指针专题）
//输入n和n个整数，然后按要求排序，若输入1，请输出升序排序序列；若输入2，请输出降序排序序列，若输入3，请输出按绝对值升序排序序列。要求程序结构如下，请完善程序。
// void sort(int a[], int n, int (*cmp)());
// int CmpAsc(int x, int y); /*按升序要求判断两元素是否逆序*/
// int CmpDec(int x, int y); /*按降序要求判断两元素是否逆序*/
// int CmpAbsAsc(int x, int y);  /*按绝对值升序要求判断两元素是否逆序*/
// int main(void)
// {
//     int a[10],i,n; 
//     int slt;
//     /*读入n和n个整数，存入数组a*/
//     /*读入用户的选择，存入slt; */
//     switch(slt)
//     {
//         case 1:   sort(a, n, CmpAsc); break;
//         case 2:   sort(a, n, CmpDec); break;
//         case 3:   sort(a, n, CmpAbsAsc);break;
//     }
//     /*输出排序后的数组*/
//     }
// void sort(int a[], int n, int (*cmp)())
// { 
//     /*对数组a排序，排序原则由cmp指定，若cmp为真，表示两元素逆序*/
// }
// int CmpAsc(int x, int y)
// {
// //如果x>y返回1，否则返回0； 
// }
// int CmpDec(int x, int y)
// {
// //如果x<y返回1，否则返回0；
// }
// int CmpAbsAsc(int x, int y)
// {
// //如果abs(x)>abs(y)返回1，否则返回0
// //如果abs(x)==abs(y) 且 x>y  返回1，否则返回0
// }
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void sort1(int a[], int n, int (*cmp)(int x, int y));
int CmpAsc(int x, int y);
int CmpDec(int x, int y);
int CmpAbsAsc(int x, int y);
int main()
{
    int a[10], i, n;
    int slt;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &slt);
    switch(slt)
   {
     case 1:   sort1(a, n, CmpAsc);
         break;
     case 2:   sort1(a, n, CmpDec);
         break;
     case 3:   sort1(a, n, CmpAbsAsc);
         break;
   }
   for (i = 0; i < n - 1; i++)
       printf("%d ", a[i]);
   printf("%d\n", a[n - 1]);
   return 0;
}

void sort1(int a[], int n, int (*cmp)(int x, int y))
{
    int t;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (cmp(a[i], a[j]))
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
		}
 }

int CmpAsc(int x, int y)
{
     if (x > y)
         return 1;
     return 0;

}
int CmpDec(int x, int y)
{
    if (x < y)
        return 1;
    return 0;
 }
int CmpAbsAsc(int x, int y)
{
    if (abs(x) > abs(y))
        return 1;
    if (abs(x) == abs(y) && x > y)
        return 1;
	return 0;
}

//1178: 单词数(多实例)
//统计一篇文章里不同单词的总数。
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30000], b[1000][31];
    int n, i, j, k, l;
    while (gets(a), strcmp(a, "#") != 0)
    {
        n = 0;
        l = strlen(a);
        for (i = 0; i < l; i++)
        {
            if (a[i] == ' ')
                continue;
            else
			{
                for (j = 0; a[i] != ' ' && i < l; j++)
                    b[n][j] = a[i++];
                b[n][j] = '\0';
                n++;
            }
		}
        k = n;
        for (i = 0; i < k - 1; i++)
            for (j = i + 1; j < k; j++)
            {
                if (strcmp(b[i], b[j]) == 0 && b[i][0] != '\0')
                {
                    b[i][0] = '\0';
                    n--;
                }
			}
        printf("%d\n", n);
        while (k--)
            b[k][0] = '\0';
    }
	return 0;
}

//1179: 带参宏定义(函数专题）
//从键盘输入三个字符，用空格隔开，使用带参宏定义1中SWAP，将三个字符按从大到小的顺序排序输出。 宏定义1：#define SWAP(a, b, t) { t=a; a=b; b=t; } 请尝试，如果用宏定义2中的SWAP，主函数需要如何修改才能得到正确结果？ 宏定义2：#define SWAP(a, b, t) t=a; a=b; b=t; 
#include<stdio.h>
#define SWAP(a, b, t) t=a; a=b; b=t;
 int main()
{
    char a, b, c, t, i;
    scanf("%c %c %c", &a, &b, &c);
    for (i = 0; i < 3; i++)
    {
        if (a < b)
        {
            {
                SWAP(a, b, t);
            }
        }
        else if (b < c)
        {
            {
                SWAP(b, c, t);
            }
        }
        else if (a < c)
        {
            {
                SWAP(a, c, t);
            }
        }
    }
    printf("%c %c %c\n", a, b, c);
    return 0;
}

//1180: 成绩统计（结构体专题）
//从键盘输入若干个学生的信息，每个学生信息包括学号、姓名、3门课的成绩，计算每个学生的总分，输出总分最高的学生的信息。
#include<stdio.h>
struct students 
{
	char xh[20];
	char name[20];
	int a;
	int b;
	int c;
};
int main()
{
	int n, i, max = 0;
	struct students a[100];
	int s[100];
    scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s%s%d%d%d", a[i].xh, a[i].name, &a[i].a, &a[i].b, &a[i].c);
		s[i] = a[i].a + a[i].b + a[i].c;
		if (s[i] > s[max])
			max = i;
	}
	printf("%s %s %d %d %d", a[max].xh, a[max].name, a[max].a, a[max].b, a[max].c);
	return 0;
}

//1181: 谁的年龄最小（结构体专题）
//设计一个结构体类型，包含姓名、出生日期。其中出生日期又包含年、月、日三部分信息。输入n个好友的信息，输出年龄最小的好友的姓名和出生日期。
#include<stdio.h>
struct students
{
    char name[20];
    int year;
    int month;
    int day;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct students a[100];
    int min = 0;
    for (int i = 0; i< n ; i++)
    {
        scanf("%s %d %d %d", a[i].name, &a[i].year, &a[i].month, &a[i].day);
        if (a[min].year < a[i].year)
            min = i;
        else if (a[min].year == a[i].year)
        {
            if (a[min].month < a[i].month)
                min = i;
            else if (a[min].month == a[i].month)
                if (a[min].day < a[i].day)
                    min = i;
        }
    }
    printf("%s %d-%02d-%02d", a[min].name, a[min].year, a[min].month, a[min].day);
    return 0;
}

//1182: 按出生日期排序（结构体专题）
//送人玫瑰手有余香，小明希望自己能带给他人快乐，于是小明在每个好友生日的时候发去一份生日祝福。小明希望将自己的通讯录按好友的生日排序排序，这样就查看起来方便多了，也避免错过好友的生日。为了小明的美好愿望，你帮帮他吧。小明的好友信息包含姓名、出生日期。其中出生日期又包含年、月、日三部分信息。输入n个好友的信息，按生日的月份和日期升序输出所有好友信息。
#include<stdio.h>
typedef struct birthday 
{
    char name[20];
    int year, month, day;
}day;
int main()
{
    day a[10], t;
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s%d%d%d", a[i].name, &a[i].year, &a[i].month, &a[i].day);
    }
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i].month > a[j].month)
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            else if (a[i].month == a[j].month && a[i].day > a[j].day)
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
		}
    for (i = 0; i < n; i++)
        printf("%s %d-%02d-%02d\n", a[i].name, a[i].year, a[i].month, a[i].day);
    return 0;
}

//1183: 平面点排序（一）（结构体专题）
//平面上有n个点，坐标均为整数。请按与坐标原点（0,0）距离的远近将所有点排序输出。可以自己写排序函数，也可以用qsort库函数排序。
#include <stdio.h>
typedef struct point
{
    int x;
    int y;
    int dist;
} stu;
int main() 
{
    int n, i, j;
    stu a[15], t;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &a[i].x, &a[i].y);
        a[i].dist = a[i].x * a[i].x + a[i].y * a[i].y;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i].dist > a[j].dist)
            {
                t = a[i];
                a[i] = a[j];
				a[j] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("(%d,%d) ", a[i].x, a[i].y);
    }
    return 0;
}

//1184: 平面点排序（二）（结构体专题）
//平面上有n个点，坐标均为整数。横坐标相同时按纵坐标排序，否则按横坐标排序。本题要求用结构体存储坐标，再进行排序。先升序排序输出，再降序排序输出，可以自己写排序函数，也可以用qsort库函数排序。
#include <stdio.h>
typedef struct Point
{
    int x;
    int y;
    int point;
} P;
int main()
{
    P p[102], temp;
    int n;
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &p[i].x, &p[i].y);
        p[i].point = p[i].x * p[i].x + p[i].y * +p[i].y;
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[i].x > p[j].x)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            else if (p[i].x == p[j].x)
            {
                if (p[i].y > p[j].y)
                {
                    temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("(%d,%d) ", p[i].x, p[i].y);
    }

    printf("\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("(%d,%d) ", p[i].x, p[i].y);
    }
    printf("\n");
    return 0;
}

//1185: 数星星（结构体专题）
//一天，小明坐在院子里数星星，Gardon就出了个难题给她：Gardon在天空画出了一个矩形区域，让他输入矩形区域里有多少颗星星，仁慈的上帝还为他标出了每个星星的坐标。但小明数着数着就看花了眼，但他的原则是：宁愿多数一次，不可错过一个。如果小明把他数过的星星的坐标都告诉你，你能否帮他进行排重处理（如果两个星星的坐标位置相同，则视为一个星星），计算出星星的个数。
#include<stdio.h>
struct xingxing
{
	int x, y;
};
int main()
{
	struct xingxing a[300];
	int n, i, j, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &a[i].x, &a[i].y);
		for (j = 0; j < i; j++)
		{
			if (a[i].x == a[j].x && a[i].y == a[j].y)
				break;
		}
		if (j == i)
			sum++;
	}
	printf("%d\n", sum);
	return 0;
}

//1186: 奖学金（结构体专题）
//某校发放奖学金共5种，获取条件各不同： 1.阳明奖学金，每人8000，期末平均成绩>80，且在本学期发表论文大于等于1篇； 2.梨洲奖学金，每人4000，期末平均成绩>85，且班级评议成绩>80； 3.成绩优秀奖，每人2000，期末平均成绩>90； 4.西部奖学金，每人1000，期末平均成绩>85的西部省份学生； 5.班级贡献奖，每人850，班级评议成绩>80的学生干部。 只要符合条件就可以得奖，一人可兼得多项奖学金。例：某生，期末平均成绩87，班级评议成绩82，且是学生干部，则可同时获得梨洲奖学金和班级贡献奖，奖金总数4850。现给出若干学生的姓名、期末平均成绩、班级评议成绩、是否学生干部、是否西部省份学生、发表论文数。计算哪个同学获得的奖金总数最高？有多个最高值则输出第一个出现的。
#include <stdio.h>
typedef struct student
{
    char name[20];
    int Last_Score;
    int Class_Score;
    char Stu_leader;
    char w_stu;
    int article;
    int sum;

} STU;
int main()
{
    int n;
    STU p[11];
    int flag = 0;
    int sum = 0;
    int max = 0;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%s%d%d %c %c %d", p[i].name, &p[i].Last_Score, &p[i].Class_Score, &p[i].Stu_leader, &p[i].w_stu, &p[i].article);
        p[i].sum = 0;
    }
    for (i = 0; i < n; i++)
    {
        if (p[i].Last_Score > 80 && p[i].article >= 1)
            p[i].sum += 8000;
        if (p[i].Last_Score > 85 && p[i].Class_Score > 80)
            p[i].sum += 4000;
        if (p[i].Last_Score > 90)
            p[i].sum += 2000;
        if (p[i].Last_Score > 85 && p[i].w_stu == 'Y')
            p[i].sum += 1000;
        if (p[i].Class_Score > 80 && p[i].Stu_leader == 'Y')
            p[i].sum += 850;
        sum += p[i].sum;
    }
    for (i = 0; i < n; i++)
    {
        if (p[i].sum > max)
        {
            max = p[i].sum;
            flag = i;
        }
    }
    printf("%s\n", p[flag].name);
    printf("%d\n", p[flag].sum);
    printf("%d\n", sum);
    return 0;
}

//1187: 棒棒糖（结构体专题）
//新年快到了，计算机学院新年晚会正在筹备中，今年有一个新创意：来参加晚会的所有学生都有礼物（一根棒棒糖）。老师把买棒棒糖的任务交给小明了，并指定了要买的棒棒糖的品牌和品种。俗话说得好，货比三家不吃亏。小明来到了商店，看了各个店铺里这种棒棒糖的价格，不仅如此，他还记住了每个店铺的存货量。已知小明打算购买n根棒棒糖，问他最少要花多少钱？
#include <stdio.h>
typedef struct bbt
{
    double price;
    int num;
} BBT;
int main()
{
    BBT p[12], temp;
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int i, j;
    double sum = 0.0;
    for (i = 0; i < m; i++)
        scanf("%lf%d", &p[i].price, &p[i].num);
    for (i = 0; i < m; i++)
    {
        for (j = i + 1; j < m; j++)
        {
            if (p[i].price > p[j].price)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
   }
   for (i = 0; i < m; i++)
   {
       if (p[i].num >= n)
       {
           sum = p[i].price * n + sum;
           break;
       }
       else
       {
           sum = p[i].num * p[i].price + sum;
           n = n - p[i].num;
       }
   }
   printf("%.2f\n", sum);
   return 0;
}

//1188: 选票统计（一）（结构体专题）
//某单位进行选举，有5位候选人：zhang、wang、zhao、liu、miao。编写程序，统计每人所得的票数。要求每人的信息里包括两部分：name和votes，分别描述姓名和所得票数。每个人的信息用一个结构体来表示，5个人的信息使用结构体数组。
#include<stdio.h>
#include<string.h>
struct person
{
	char name[10];
	int vote;
};
int main()
{
	int i, j, n;
	char iname[10];
	struct person v[5]={ {"zhang",0} , {"wang",0} , {"zhao",0} , {"liu",0} , {"miao",0} };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", iname);
		for (j = 0; j < 5; j++)
		{
			if (strcmp(v[j].name, iname) == 0)
			{
				v[j].vote += 1;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%s %d\n", v[i].name, v[i].vote);
	}
	return 0;
}

//1189: 选票统计（二）（结构体专题）
//计算机与通信工程学院2012届学生会主席投票选举工作定于1月6日在电教楼前隆重举行。本次投票将采用电脑统计选票的方式，当投票选举正式开始后，同学们将排队一一走到电脑前，投上自己神圣的一票：在电脑前输入一个姓名，然后输入回车表示确认。 当所同学投票结束，工作人员只需要输入一个”#”并回车确认，表示投票结束，电脑立即显示出得票最高的同学姓名，该同学将当选为新一届计算机与通信工程学院学生会主席。 选举大会的准备工作正在紧张进行，编程统计投票的工作就交给你了。
#include <stdio.h>
typedef struct vote
{
    char name[20];
    int votes;
} VOTE;
int main()
{
    int i = 0, j = 0;
    int max = 0;
    VOTE p[501];
    for (i = 0; i < 501; i++)
        p[i].votes = 0;
    char ch[20];
    while (scanf("%s", ch) && ch[0] != '#')
    {
        int count = 0;
        for (i = 0; i < j; i++)
        {
            if (strcmp(ch, p[i].name) == 0)
            {
                p[i].votes++;
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            strcpy(p[j++].name, ch);
        }
 
    }
    for (i = 1; i < j; i++)
    {
        if (p[i].votes > p[max].votes)
            max = i;
    }
    printf("%s\n", p[max].name);
    return 0;
}

//1190: 查询记录（结构体专题）
//有一学生成绩表，包括学号、姓名、3门课程成绩。请实现如下查找功能：输入一个学生的学号，输出该学生学号、姓名、3门课程成绩 
#include<stdio.h>
struct STU
{
    char id[15];
    char name[25];
    int a, b, c;
} p[110];
char fid[15];
int main()
{
    int n, i, j;
    while (~scanf("%d", &n))
    {
        int flag = 0;
        for (i = 0; i < n; i++)
            scanf("%s%s%d%d%d", p[i].id, p[i].name, &p[i].a, &p[i].b, &p[i].c);
        scanf("%s", fid);
        for (i = 0; i < n; i++)
        {
            if (strcmp(fid, p[i].id) == 0)
            {
                j = i;
                flag = 1;
                break;
            }
		}
        if (flag)
            printf("%s %s %d %d %d\n", p[j].id, p[j].name, p[j].a, p[j].b, p[j].c);
        else
            printf("Not Found\n");
    }
    return 0;
}

//1191: 添加记录（结构体专题）
//有一学生成绩表，包括学号、姓名、3门课程成绩。已知该成绩表按学号升序排序。请编程实现，添加一个新的学生信息，且使成绩表仍按学号有序；若待添加的学号与已有学号重复，则输出错误信息，拒绝添加。
#include<stdio.h>
#define swap(a,b,t){t=a;a=b;b=t;}
typedef struct student
{
    long long int ID;
    char name[20];
    int a, b, c;
} STU;
int main()
{
    STU stu[100], stu1, t;
    int n, j, i;
    int flag = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%lld %s %d %d %d", &stu[i].ID, stu[i].name, &stu[i].a, &stu[i].b, &stu[i].c);
    scanf("%lld %s %d %d %d", &stu1.ID, stu1.name, &stu1.a, &stu1.b, &stu1.c);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (stu[i].ID > stu[j].ID)
                swap(stu[i], stu[j], t);
        }
		}

        for (i = 0; i < n; i++)
        {
            if (stu[i].ID == stu1.ID)
            {
                flag = 1;
                printf("error!");
                break;
            }
			else
        	{
                if (stu[i].ID < stu1.ID)
                    j = i;
                if (stu1.ID < stu[0].ID)
                {
                    swap(stu1, stu[0], t);
                    j = i;
                }
        	}
		}

        if (n == 1)
        {
            flag = 1;
            if (stu[0].ID == stu1.ID && flag == 0)
                printf("error!");
            else if (stu[0].ID < stu1.ID)
            {
                printf("%lld %s %d %d %d\n", stu[0].ID, stu[0].name, stu[0].a, stu[0].b, stu[0].c);
                printf("%lld %s %d %d %d\n", stu1.ID, stu1.name, stu1.a, stu1.b, stu1.c);
            }
            else if (stu[0].ID > stu1.ID)
            {
                swap(stu[0], stu1, t);
                printf("%lld %s %d %d %d\n", stu[0].ID, stu[0].name, stu[0].a, stu[0].b, stu[0].c);
                printf("%lld %s %d %d %d\n", stu1.ID, stu1.name, stu1.a, stu1.b, stu1.c);
            }
	}
    if (flag == 0)
    {
        for (i = 0; i < n; i++)
        {
            if (i != j)
                printf("%lld %s %d %d %d\n", stu[i].ID, stu[i].name, stu[i].a, stu[i].b, stu[i].c);
            else
			{
                printf("%lld %s %d %d %d\n", stu[i].ID, stu[i].name, stu[i].a, stu[i].b, stu[i].c);
                printf("%lld %s %d %d %d\n", stu1.ID, stu1.name, stu1.a, stu1.b, stu1.c);
            }
		}
	}	
	return 0; 
}

//1192: 删除记录（结构体专题）
//有一学生成绩表，包括学号、姓名、3门课程成绩。请实现如下删除功能：输入一个学生的学号，删除该学生的所有信息。
#include<stdio.h>
struct STU
{
    char id[15];
    char name[25];
    int a, b, c;
} p[110];
char fid[15];
int main()
{
    int n, i, j;
    while (~scanf("%d", &n))
    {
        int flag = 0;
        for (i = 0; i < n; i++)
            scanf("%s%s%d%d%d", p[i].id, p[i].name, &p[i].a, &p[i].b, &p[i].c);
        scanf("%s", fid);
        for (i = 0; i < n; i++)
        {
            if (strcmp(fid, p[i].id) == 0)
            {
                j = i;
                flag = 1;
                break;
            }
		}
        if (flag)
        {
            for (i = 0; i < n; i++)
            {
                if (i == j)
                    continue;
                printf("%s %s %d %d %d\n", p[i].id, p[i].name, p[i].a, p[i].b, p[i].c);
            }
		}
		else
            printf("error!\n");
    }
	return 0;
}

//1193: 单科成绩排序（结构体专题）
//有一学生成绩表，包括学号、姓名、3门课程成绩。请按要求排序输出：若输入1，则按第1门课成绩降序输出成绩表，若输入为i（1<=i<=3)，则按第i门课成绩降序输出成绩表。
#include<stdio.h>
typedef struct head
{
    char num[13];
    char name[25];
    int a[3];
} h;
void swap(h *a, h *b)
{
    h t;
    t = *a, *a = *b, *b = t;
}
void sort(h b[], int s, int n)
{
    for (int i = 0; i < n; i++)
        for (int k = i; k < n; k++)
        {
            if (b[i].a[s] < b[k].a[s])
                swap(&b[i], &b[k]);
            else if (b[i].a[s] == b[k].a[s])
                if (strcmp(b[i].num, b[k].num) > 0)
                    swap(&b[i], &b[k]);
        }
}
int main()
{
    h b[100] = {0};
    int n, k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s %s %d %d %d", b[i].num, b[i].name, &b[i].a[0], &b[i].a[1], &b[i].a[2]);
    scanf("%d", &k);
    k--;
    sort(b, k, n);
    for (int i = 0; i < n; i++)
        printf("%s %s %d %d %d\n", b[i].num, b[i].name, b[i].a[0], b[i].a[1], b[i].a[2]);
    return 0;
}

//1194: 总成绩排序（结构体专题）
//有一学生成绩表，包括学号、姓名、3门课程成绩。请按如下规则排序：按总成绩降序排序；若总成绩相同，则按姓名升序排序；若姓名相同，则按学号升序排序。
#include<stdio.h>
typedef struct student
{
    char no[13];
    char name[21];
    int a;
	int b;
	int c;
	int sum;
} student;
void swap(student *x, student *y)
{
    student *t;
    t = (student *)malloc(sizeof(student));
    *t = *x;
    *x = *y;
    *y = *t;
}
int main()
{
    int t, i, j;
    student *stu;
    scanf("%d", &t);
    getchar();
    stu = (student *)malloc(sizeof(student) * t);
    for (i = 0; i < t; i++)
    {
        scanf("%s %s %d %d %d", stu[i].no, stu[i].name, &stu[i].a, &stu[i].b, &stu[i].c);
        stu[i].sum = stu[i].a + stu[i].b + stu[i].c;
    }
    for (i = 1; i < t; i++)
    {
        for (j = 0; j < t - i; j++)
        {
            if (stu[j].sum < stu[j + 1].sum) //比较总分数
                swap(&stu[j], &stu[j + 1]);
            else if (stu[j].sum == stu[j + 1].sum)
            {
                if (strcmp(stu[j].name, stu[j + 1].name) > 0)
                    swap(&stu[j], &stu[j + 1]);
            }
        }
    }
    for (i = 0; i < t; i++)
    {
        printf("%s %s %d %d %d %d\n", stu[i].no, stu[i].name, stu[i].a, stu[i].b, stu[i].c, stu[i].sum);
    }
    return 0;
}

//1195: 猴子选大王（结构体专题）
//n只猴子围坐成一个圈，按顺时针方向从1到n编号。然后从1号猴子开始沿顺时针方向从1开始报数，报到m的猴子出局，再从刚出局猴子的下一个位置重新开始报数，如此重复，直至剩下一个猴子，它就是大王。
#include<stdio.h>
#define N 110
typedef struct monkey
{
    int n;
} MK;
void xunhuan(struct monkey p[], int m);
void del(MK p[], int i, int m);
int main()
{
    MK p[N];
    int m, n;
    scanf("%d%d", &m, &n);
    int i;
    for (i = 1; i <= m; i++)
        p[i].n = i;
    while (m != 1)
    {
        for (i = 1; i < n; i++)
            xunhuan(p, m);
        del(p, 1, m--);
    }
    printf("%d", p[1].n);
    return 0;
}
void xunhuan(MK p[], int m)
{
    MK T;
    T = p[1];
    int i;
    for (i = 1; i < m; i++)
        p[i] = p[i + 1];
    p[m] = T;
}
void del(MK p[], int i, int m)
{
    int k;
    for (k = i; k < m; k++)
        p[k] = p[k + 1];
}

//1196: 数星星（二）（结构体专题）
//一天，小明坐在院子里数星星，Gardon就出了个难题给他，让他数数天上的星星最多有多少个是在同一条直线上的。天上的星星太多了，小明马上就看花了眼，你能写个程序来帮他计算么？
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 301
typedef struct point
{
    double x;
    double y;
} point;
int main()
{
    int n, h = 0, a[45000] = {0}, max = 0;
    point p[N];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &p[i].x, &p[i].y);
    }
    if (n == 1)
    {
        printf("1\n");
        return 0;
    }
    if (n == 2)
    {
        printf("2\n");
        return 0;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((p[k].y - p[i].y) * (p[k].x - p[j].x) - (p[k].x - p[i].x) * (p[k].y - p[j].y) == 0)
                    a[h]++;
            }
            h++;
        }
    }
    for (int i = 0; i < h; i++)
    {
        if(a[i]>max)
            max = a[i];
    }
    printf("%d\n", max + 2);
    return 0;
}

//1197: 考试排名（一）（结构体专题）
//今天浙大研究生复试的上机考试跟传统笔试的打分规则相似，总共有n道题，每道题有对应分值，最后计算总成绩。现给定录取分数线，请你写程序找出最后通过分数线的考生，并将他们的成绩按降序打印。
#include<stdio.h>
#include<string.h>
struct score
{
    char name[20];
    int n;
    int arr[10];
    int s;
};
int main()
{
    int b[10], m, i, j, c, d = 0, z;
    struct score a[100], t;
    scanf("%d%d%d", &m, &c, &z);
    for (i = 0; i < c; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < m; i++)
    {
        a[i].s = 0;
        scanf("%s%d", &a[i].name, &a[i].n);
        for (j = 0; j < a[i].n; j++)
        {
            scanf("%d", &a[i].arr[j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < a[i].n; j++)
        {
            a[i].s += b[a[i].arr[j] - 1];
        }
    }
    for (i = 1; i <= m; i++)
    {
        for (j = 0; j < m - i; j++)
        {
            if (a[j].s < a[j + 1].s)
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
            else if (a[j].s == a[j + 1].s && strcmp(a[j].name, a[j + 1].name) > 0)
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        if (a[i].s >= z)
            d++;
    }
    printf("%d\n", d);
    for (i = 0; i < m; i++)
    {
        if (a[i].s >= z)
            printf("%s %d\n", a[i].name, a[i].s);
    }
    return 0;
}

//1198: 考试排名（二）(结构体专题)
//ACM 国际大学生程序设计竞赛，英文全称：ACM International Collegiate Programming Contest（ACM-ICPC 或 ICPC）是由美国计算机协会（ACM）主办的，一项旨在展示大学生创新能力、团队精神和在压力下编写程序、分析和解决问题能力的年度竞赛。经过30多年的发展，ACM 国际大学生程序设计竞赛已经发展成为最具影响力的大学生计算机竞赛。一般就简称为 ACM 竞赛了（虽然照理来说应该简称成 ICPC 才对）。 ACM 竞赛的计分规则如下： 首先按照过题数排名，过题数相同的队伍按照罚时排名（罚时小的队伍排在前面），如果罚时也相同则认为名次相同（名次相同时在排名表上队伍 id 较小的队伍列在前面）。 对于罚时的计算。队伍总体的罚时等于该队各题的罚时之和。对于某题的罚时，如果这道题最后没有通过（没有正确提交），则这题的罚时为 0，否则这道题的罚时为：从比赛开始到该题第一次正确提交经过的时间 + 第一次通过之前的错误提交次数 * 20 分钟。 例如：某次考试一共8题（A，B，C，D，E，F，G，H），每个人做的题都在对应的题号下有个数量标记，负数表示该学生在该题上有过的错误提交次数，但到现在还没有AC，正数表示AC所耗的时间，如果正数a跟上一对括号，里面有个整数b，那就表示该学生提交该题AC了，耗去了时间a，同时，曾经错误提交了b次，因此对于下述输入数据：则其排名从高到低应该是这样的： Josephus 5 376 John 4 284 Alice 4 352 Smith 3 167 Bob 2 325 Bush 0 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
    char name[21];
    int ss;
    int num[11];
    int sum;
} student;
void swap(student *x, student *y)
{
    student *t;
    t = (student *)malloc(sizeof(student));
    *t = *x;
    *x = *y;
    *y = *t;
}
int main()
{
    int i, j, n, m, g, *a;
    student *stu, t;
    scanf("%d %d %d", &n, &m, &g);
    a = (int *)malloc(sizeof(int) * (m + 1));
    stu = (student *)malloc(sizeof(student) * n);
    for (i = 1; i <= m; i++)
        scanf("%d", &a[i]);
    getchar();
    for (i = 0; i < n; i++)
    {
        scanf("%s %d", stu[i].name, &stu[i].ss);
        stu[i].sum = 0;
        for (j = 0; j < stu[i].ss; j++)
        {
            scanf("%d", &stu[i].num[j]);
            stu[i].sum += a[stu[i].num[j]];
        }
    }
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (stu[j].sum < stu[j + 1].sum)
                swap(&stu[j], &stu[j + 1]);
            else if (stu[j].sum == stu[j + 1].sum)
            {
                if (strcmp(stu[j].name, stu[j + 1].name) > 0)
                    swap(&stu[j], &stu[j + 1]);
            }
        }
    }
    int cnt = 0;
    for (i = 0; i < n; i++)
    {
        if (stu[i].sum >= g)
            cnt++;
    }
    printf("%d\n", cnt);
    for (i = 0; i < n; i++)
        if (stu[i].sum >= g)
            printf("%s %d\n", stu[i].name, stu[i].sum);
    return 0;
}

//1199: 多项式相加（多实例）
//一个多项式可以表达为x的各次幂与系数乘积的和，比如：2x6+3x5+12x3+6x+20现在，你的程序要读入两个多项式，然后输出这两个多项式的和，也就是把对应的幂上的系数相加然后输出。程序要处理的幂最大为100。

//1200: 平均数计算
//当我们用平均数来表示一个数据的“集中趋势”时，如果数据中出现一、两个极端数据，那么平均数对于这组数据所的代表作用就会削弱，为了消除这种现象，可将少数极端数据去掉，只计算余下的数据的平均数，并把所得的结果作全部数据的平均数。所以，在评定文艺与体育比赛的成绩时，常常采用在评分数据中分别去掉一个最高分和一个最低分，再计算其中平均分的办法，以避免极端数据造成的不良影响。现有5个整数，能不能用上述的规则计算这五个数的平均数呢？
