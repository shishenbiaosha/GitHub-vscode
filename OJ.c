//1000: A + B Problem
//������������a, b�ĺ�
#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a + b);
    return 0;
}

//1001: ֲ������
//ĳѧУֲ���ڿ�չֲ�������֪������m�꣬�μ�ֲ����ͬѧ��n�ˣ���m>n��������ÿλͬѧƽ������ֲ�����ꣿ���м���ʣ�ࣿ
#include<stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d %d", m / n, m % n);
    return 0;
}

//1002: �򵥶���ʽ��ֵ
//���û��������һ������������¶���ʽ��ֵ��y = 2x2 + x + 8
#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int y = 2 * x * x + x + 8;
    printf("%d", y);
    return 0;
}

//1003: ������������������
//������������num1��num2���������һ�����򣬼��㲢������ǵĺ͡�����������̼�������
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

//1004: ��λ������λ����
//�Ӽ�������һ���������λ���������ֱ�������λ��ʮλ�Ͱ�λ�ϵ����֡�
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

//1005: ������
//����3��������������ǵ�1���ݡ�2���ݺ�3���ݡ�
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

//1006: ��Ȳ����еĺ�
//���������������ֱ��ʾ�Ȳ����еĵ�һ����һ��͹��������еĺ͡�
#include<stdio.h>
int main()
{
    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);
    result = (b - a + c) * (a + b) / (2 * c);
    printf("%d", result);
    return 0;
}

//1007: ����ͬ��
//�����ù���һ�����������2ֻ�ţ�����4ֻ�ţ�û�����⡣��֪���ڿ��Կ���������m��ͷ��nֻ�ţ��󼦺����Ӹ��ж���ֻ��
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

//1008: ��Ԫ�������
//��ԪԽ��Խ��ֵ�ˣ���������̫�����Ԫ�ƺ����Ǽ����¡��Ͻ����������Щ��Ԫ��ֵ��������Ұɡ�������Ԫ������ҵĻ�����1��Ԫ�һ�6.5573Ԫ����ң���д����������Ԫ�Ľ�����ܶһ�������ҽ�
#include<stdio.h>
int main()
{
    double dollar, rmb;
    scanf("%lf", &dollar);
    printf("%.2lf", 6.5573 * dollar);
    return 0;
}

//1009: ��ƽ����
//��֪ĳλѧ������ѧ��Ӣ��ͼ�����γ̵ĳɼ�����������ſγ̵�ƽ���֡�
#include<stdio.h>
int main()
{
    float math, eng, com, ave;
    scanf("%f %f %f", &math, &eng, &com);
    printf("%.2f", (math + eng + com) / 3);
    return 0;
}

//1010: ��Բ���ܳ������
//����Բ�İ뾶����Բ���ܳ�������� Ҫ����Բ����Ϊ���º곣�� #define PI 3.14159
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

//1011: Բ��������
//����Բ����ĵ���뾶r�͸�h������Բ����ı�������������Ļ�ϡ�Ҫ����Բ����Ϊ���º곣�� #define PI 3.14159
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

//1012: �����ֵ
//��ʵ���ľ���ֵ��
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

//1013: ����������
//����A(x1, y1), B(x2, y2)�������꣬�������Ǽ�ľ��롣
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

//1014: �������ε����
//���������ε������ߣ��������ε������
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

//1015: ���η��̵�ʵ��
//��̼��㲢���һԪ���η���ax^2+bx+c=0������ʵ��������a��b��c��ֵ���û��Ӽ������룬����a��b��c��ֵ�ܱ�֤��������������ȵ�ʵ������b^2-4ac>0����
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

//1016: ��������
//������1���ڶ��ڴ��������Ϊ2.25 % ������ΪdepositԪ���Ա�̼��㲢���n���ı���֮�͡�
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

//1017: ����������
//����5������a, b, c, d �� e����������ı���������������������������һ�������Ϊa, b, c �ĳ����壬ÿһ�����붼�ǰ���ȥ�ģ�������ȥ�����Ϊ d��û����ȥ�ı߿��� e��
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

//1018: ����ż��
//����һ���������жϸ�������������ż����
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

//1019: ��԰��Ʊ
//ĳ��԰��Ʊ��Ʊ����ÿ��50Ԫ��һ�ι�Ʊ��30�ţ�ÿ�ſ�������2Ԫ���Ա�д�Զ��Ʒ�ϵͳ����
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

//1020: ����������
//�Ӽ���������������x,y������С�����˳��������ǵ�ֵ��
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

//1021: �������������ֵ
//�Ӽ���������������x,y��z�����������������
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

//1022: ����������
//�Ӽ���������������x, y��z�����Ӵ�С��˳��������ǵ�ֵ��
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

//1023: ��Сдת��
//����һ����ĸ������Сд��ĸ�����Ϊ��д���������ԭ�������
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

//1024: ������ĸ���
//����һ��Ӣ����ĸ�������Ǵ�д��Ҳ������Сд�����������ĸ����ĸ���е���ţ���a���͡�A�������Ϊ1����
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

//1025: ����ַ�
//��������ASCII�ַ�(�����հ��ַ�:�����ո��Ʊ��\t���س����з�\n)���ҳ����������Ǹ�
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

//1026: �ַ������ж�
//�Ӽ�������һ���ַ����жϸ��ַ��Ƿ��д��ĸ��Сд��ĸ�������ַ��������ַ����ֱ������Ӧ����ʾ��Ϣ��
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

//1027: �ж�ˮ�ɻ���
//��ˮ�ɻ�������ָһ����λ�������ĸ�λ���ֵ������͵����䱾�����磺153 = 13 + 53 + 33������Ҫ������һ����λ�����жϸ����Ƿ���ˮ�ɻ���������ǣ������yes�������������no��
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

//1028: I love ���꣡
//����һ����ݣ��ж��Ƿ������ꡣ
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

//1029: �������ж�
//�����������������ж����������������߳��Ƿ��ܹ���һ�������Ρ�
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

//1030: �ж�ֱ��������
//�����������������ж����������������߳��Ƿ��ܹ���һ��ֱ�������Ρ�
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

//1031: �жϵ��ڵڼ�����
//�Ӽ�������2������x��yֵ����ʾƽ����һ������㣬�жϸ�����㴦�ڵڼ����ޣ��������Ӧ�Ľ����
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

//1032: Ա��нˮ
//ĳ��˾�涨��������Ա�����ɻ������ʺ����������������ɣ����л���������1500Ԫ/�£�������ɹ������£����۶�С�ڵ���10000Ԫʱ������5% ��ɣ����۶����10000Ԫ��С�ڵ���50000Ԫʱ������10000���ְ���3% ��ɣ����۶����50000Ԫʱ������50000���ְ���2% ��ɡ���д���򣬸������۶����Ա�����롣
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

//1033: �弶�Ƴɼ�
//����һ���ٷ��Ƴɼ�, ����ݰٷ��Ƴɼ�������Ӧ�ĵȼ���ת����ϵ���£� 90������Ϊ��A����80~89Ϊ��B���� 70~79Ϊ��C���� 60~69Ϊ��D����60������Ϊ��E����
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

//1034: �ļ�����
//�̳��ļ�����������500Ԫ���£������ۣ�����500Ԫ���������ϣ�95�ۣ�����1000Ԫ���������ϣ�9�ۣ�����3000Ԫ���������ϣ�85�ۣ�����5000Ԫ���������ϣ�8�ۡ��������ѽ�ȷ���û�ʵ����Ҫ֧������Ŀ��
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

//1035: �ֶκ�����ֵ
//��֪��y��x�ĺ���, ��x < -2ʱ��y = 7 - 2x����x >= -2, ��x < 3ʱ��y = 5 - | 3x + 2 | ����x >= 3ʱ��y = 3x + 4
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

//1036: ĳ��ĳ���ж�����
//����һ����ݺ��·ݣ�������ж�����
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
    default:printf("�������");
    }
    return 0;
}

//1037: ��������
//����һ���򵥵�����������ʽ����������ʵ����һ������������̼�������
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

//1038: ����ֵ���
//����3���������������ֵ�����Ǹ�����
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

//1039: n�������
//����һ������n��n�������������n�������ĺ͡�
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

//1040: �������1
//����һ������n���������1+1/3+1/5+����ǰn��ĺ͡�
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

//1041: �������2
//����һ������n���������1-1/3+1/5-����ǰn��ĺ͡�
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

//1042: �������3
//��1-2/3+3/5-4/7+5/9-6/11+...��ǰn��ͣ��������3λС����
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

//1043: ���ֵ
//����һ������n��n�������������n�����������ֵ��
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

//1044: ��������
//����n��n��ѧ���ɼ�(ʵ����������������ʡ�
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

//1045: ��ֵͳ��
//ͳ�Ƹ�����n�����У���������������ĸ�����
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

//1046: �����ĳ˻�
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

//1047: ������
//��������������m��n�����m��n֮��ÿ����������Ȼ������
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

//1048: �׳˱�
//����һ��������n(n<=20)�����1��n֮��׳˱�
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

//1049: ƽ������������
//������������m��n�����m~n�������������������ż����ƽ�����Լ����������������͡�
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

//1050: �׳˵��ۼӺ�
//��1! + 2! + ����n!
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

//1051: ƽ�����ĺ�
//���еĶ������£� ���еĵ�һ��Ϊitem���Ժ����Ϊǰһ���ƽ�����������е�ǰn��ĺ͡�
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

//1052: �������4
//����n��a����a + aa + aaa + ��aa��a(n��a)���統n = 3, a = 2ʱ��2 + 22 + 222�Ľ��Ϊ246
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

//1053: ���Һ���
//(ͼ��)����x���������湫ʽ��ǰ10��͡�
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

//1054: ���ӳ���
//��յ�һ��ժ���������ɣ������Ե�һ�룬������񫣬�ֶ��һ�����ڶ����ֽ�ʣ�µ����ӳԵ�һ���һ�����Ժ�ÿ��Ե�ǰһ��ʣ�µ�һ���һ��������n��׼���Ե�ʱ��ֻʣ��һ�����ӡ��������㣬��������һ�£�����һ�쿪ʼ�Ե�ʱ������һ���ж��ٸ��أ�
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

//1055: ���ӷ�ֳ����
//����һ����Ȥ�Ĺŵ���ѧ���⣬�����������ѧ��Fibonacci�����һ�����⣺��һ��С���ӣ��ӳ������3������ÿ���¶���һ�����ӡ�С���ӳ�����3���º�ÿ��������һ�����ӡ����˹��ɣ�����û��������������һ������һ�Ըճ�����С���ӣ��ʵ�n�����ж��ٶ����ӣ�
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

//1056: ������ȡ
//��������һ��������ȡ����ϢΪx������ĳ����ͷ��һ��Ǯ���������ڽ��5���У�ÿ�����ȡ��1000Ԫ��Ϊ��������Ľ����𣬵���5�꺢�ӱ�ҵʱ�պ�ȡ�����Ǯ�����̼����1�����ʱ��Ӧ�������ж���Ǯ��
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

//1057: �����ж�
//����һ��������n���ж�n�Ƿ�����������n�������������Yes��,���������No����
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


//1058: ��ⲻ��ʽ
//��֪����ʽ 1��+2��+3��+...+m��?n,���̶��û�ָ����nֵ���㲢�������ò���ʽ��m�������⡣
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

//1059: ��߷�
//����һ��ѧ���ĳɼ����������������߷֡�
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

//1060: ��������
//����һ��int���������������������ÿ�����ֺ���һ���ո�
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

//1061: ˳�������λ����
//����һ���������Ӹ�λ��ʼ��λ�ָ�����λ���֡�
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

//1062: ���Լ��
//������������������������Լ����
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

//1063: ���Լ����С����
//������������������������Լ������С��������
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

//1064: �����ַ�
//�Ӽ�������һ���ַ�����@��������Ҫ����ܲ������
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

//1065: ͳ�������ַ��ĸ���
//����һ���ַ����Իس�����Ϊ��������ı�־��ͳ�����������ַ��ĸ�����
#include<stdio.h>
int main()
{
    char ch[100];
    int i, count;
    gets(ch);
    count = 0;
    for (i = 0; ch[i] != '\0'; i++)//? ���з���\n ������\n���� 
    {
        if (ch[i] >= '0' && ch[i] <= '9')
            count++;
    }
    printf("%d\n", count);
    return 0;
}

//1066: �ַ�����ͳ��
//����һ���ַ����Իس�����Ϊ��������ı�־��ͳ������Ӣ����ĸ�������ַ��������ַ��ĸ�����
#include<stdio.h>
int main()
{
    char ch[100];
    int i, letter, digit, other;
    gets(ch);
    letter = 0;
    digit = 0;
    other = 0;
    for (i = 0; ch[i] != '\0'; i++)//? ���з���\n ������\n���� 
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

//1067: ���������̱�
//ĳ��������һ����̱�����̱������ʾһ��������Ϊ�ó��߹��Ĺ�������Ȼ�������̱��и�ë���������Ǵ�3�䵽5������������4����̱�����λ����λ�� ʮλ����λ�ȣ��ϵ����ֶ�����ˡ����磬�����̱���ʾ339,�����߹�1����֮�󣬸���̱���ʾ350��
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

//1068: ��������
//��һ������������ת��Ϊ��Ӧ��ʮ��������
#include<stdio.h>
int main()
{
    int d, i, n, k;
    scanf("%d", &n);
    d = 0;
    for (i = 1; i <= n; i++)//�ؾ����㷨
    {
        scanf("%d", &k);
        d = d * 2 + k;
    }
    printf("%d", d);
    return 0;
}

//1069: ��Zͬѧѧϰ
//ZͬѧΪ��ʵ�����ȥ�������ε����룬�����Ժ�ÿ��ֻ����1Ԫ��ÿ��kԪ�Ϳ����ٵõ�1Ԫ��һ��ʼZͬѧ��MԪ���������Լ�ֶ����졣
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

//1070: С������λ��
//��һ������С���������ʱ��Ϊ0)��λ��Ϊ(0,0)��������֪��������λ�á�С����ÿСʱ10������ٶ����ƶ����Ա�Ϊy�������Զ�Ϊx�����򣩡�С�����ܵ�һϵ������ʱ�������������1��ʾ������ת����2��ʾ������ת����3��ֹͣ����ÿ�������ǰ����һ��ʱ����ǣ���������֪���������Ǻ�ʱ�����ġ����һ������һ���ǡ�ֹͣ��������������裬����С���ǳ�����������˲��ת�䡣����������Ϊ����С����ʱ��Ϊ5��ʱ���յ�һ��������ת��������1����ʱ��10�յ�һ��������ת��������2����ʱ��15�յ�һ����ֹͣ��������3����ô�����ʱ��15��ʱ��С����λ�ý��ڣ� - 50, 100��������ֻҪ�����С������λ�ã���һ��������x���꣬�ڶ���������y���ꡣ

//1071: �ֽ�������
//��һ���������ֽ������������磬����90�����2 3 3 5��
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

//1072: ��������
//��һ�����Ϊhigh�׵�ˮ����������һֻ���ܣ���ÿ������ܹ��ؾ���������up�ף�ҹ����˳�������»�down�ף������ܴ�ĳ���糿��ʼ����������������ָ����high��up��downֵ����Ϊ��Ȼ�������������ܶ������ܹ��������ڣ�

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

//1073: �������
//��֪��Sn= 1��1��2��1��3������1��n����Ȼ��������һ������K����n�㹻���ʱ��Sn����K���ָ���һ������K��1 <= k <= 15����Ҫ������һ����С��n��ʹ��Sn��K��
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

//1074: ��Ǯ��ټ�
//��Ǯ��ټ����⣺��������Ǯһֻ��ĸ������Ǯһֻ��С����ֻһ��Ǯ����100��Ǯ��100ֻ����������ĸ����С���������ֻ�� ������Ҫ���������ǣ�����һ��������n����n��Ǯ��nֻ�����ʹ�����ĸ����С���������ֻ��
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

//1075: �۲�����ͳ��
//���˼�ָ���������һ��Ȥζ��ѧ�⣺���ˡ�Ů�˺�С���ܼ�n���ˣ���һ�ҷ�����Է���������cost���ÿ�����˸���3���ÿ��Ů�˸���2���ÿ��С������1���������ٷ���̼������ˡ�Ů�˺�С�����м�����
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

//1076: ��λ�����
//��֪xyz+yzz=n������n��һ����������x��y��z�������֣�0-9������дһ���������x��y��z�ֱ����ʲô���֡�����޽⣬�������No Answer�� ע�⣺xyz��yzz��ʾһ����λ���������Ǳ�ʾx* y* z��y* z* z��
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

//1077: �ַ�������
//����һ���ַ������Ȳ�����100����һ��������k�������е�Ӣ����ĸ���ܲ�������ܺ���ַ�������Ӣ����ĸ���䡣����˼�룺��ÿ����ĸc��һ������k������������ĵ�k����ĸ���棬�任��ʽ��c=c+k�������ĸΪz�����һ����ĸ��a��Ҳ������ĸ�ַ��γ�һ��Բ��
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

//1078: a+b����ʵ������1��
//����A+B 
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

//1079: a+b����ʵ������2��
//����A+B
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

//1080: a+b����ʵ������3��
//����A + B
#include<stdio.h>
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b), a != 0 || b != 0)
        printf("%d\n", a + b);
    return 0;
}

//1081: n������� ����ʵ�����ԣ�
//��n�������ĺ͡�
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

//1082: ��7����ʵ�����ԣ�
//���7��7�ı��������а���7���������磨17��27��37...70��71��72��73...��
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

//1083: ��ֵͳ��(��ʵ������)
//ͳ�Ƹ�����n�����У���������������ĸ���
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

//1084: ���������ľ��루��ʵ�����ԣ�
//�����������꣨X1,Y1��,��X2,Y2��,���㲢��������ľ��롣
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

//1085: �������ĳ˻�����ʵ�����ԣ�
//����n�������������������������ĳ˻� 
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

//1086: ASCII�����򣨶�ʵ�����ԣ�
//���������ַ��󣬰����ַ���ASCII���С�����˳������������ַ���
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

//1087: ��ȡ�������ڣ���ʵ������)
//����ĳ�˵�18λ���֤�ţ������������ڡ�
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

//1088: �ֻ��̺� ����ʵ����
//��Ҷ�֪�����ֻ�����һ��11λ�������ִ���ͬʱ����Ϊѧ�����������������У԰�����������ɹ����㽫����ӵ��һ���̺š��������еĶ̺Ŷ����� 6+�ֻ��ŵĺ�5λ���������Ϊ13512345678���ֻ�����Ӧ�Ķ̺ž���645678�����ڣ��������һ��11λ�����ֻ����룬�����ҳ���Ӧ�Ķ̺���
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

//1089: �׳˵����λ
//����һ��������n�����n!�����λ�ϵ����֡�
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

//1090: �����ݣ���ʵ�����ԣ�
//��A^B�������λ����ʾ��������1<=A,B<=1000��
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

//1091: ͯ����������£���ʵ�����ԣ�
//RedraimentСʱ����·ϲ���ı�����������ϲ����¥����������ȥ�� �����׵���һ��ֻ������һ�׻���һ���ӱ������ס�����һ����N��̨�ף��������һ��Redraiment�ӵ�0�׵���N�׹��м����߷���
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
//1092: ������(����ר�⣩
//��������������m��n�����m��n֮������������� Ҫ�������һ��prime()������һ��main()������prime()�����ж�һ������n�Ƿ������������๦����main()������ʵ�֡�
//int prime(int n)
//{
//    //�ж�n�Ƿ�Ϊ������ ��nΪ����������������1�����򷵻�0 
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

#include<stdio.h>//��ʱ
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

//1093: ��֤��°ͺղ��루����ר�⣩
//��°ͺղ����Ҷ�֪��һ��ɡ��������ڲ�����֤��������ۣ����Ƕ����θ���һ����С��6��ż������Ѱ�Һ͵��ڸ�ż�������������ԡ����������ʵ��,����˵����������ǳ����ġ� Ҫ�������һ��prime()������һ��main()������prime()�����ж�һ������n�Ƿ������������๦����main()������ʵ�֡�
//int prime(int n)
//{
//    //�ж�n�Ƿ�Ϊ������ ��nΪ����������������1�����򷵻�0 
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

//1094: ͳ��Ԫ��������ר�⣩
//����һ���ַ�����ͳ������Ԫ����ĸ�ĸ�����Ҫ��ʹ�ú���vowel()�����ж��Ƿ�ΪԪ��,���๦����main()������ʵ�֡� 
//int vowel(char ch)
//{
//    //���ch��Ԫ��������1�����򷵻�0 
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

//1095: ʱ��������ʵ�����ԣ�
//�Ӽ�����������ʱ���(24Сʱ�ƣ����������ʱ���֮���ʱ������ʱ�����á�Сʱ:����:�롱��ʾ��Ҫ�������������������������main()�е�������������ʵ����Ӧ�Ĺ��������βηֱ�ΪΪ���ڱ�ʾһ��ʱ����ʱ���֡��룬�������ض�Ӧ���롣
//int HmsToS(int h, int m, int s);
//�β�s��ʾһ��ʱ��εĳ��ȣ���λ���룬�ú�������ʱ���ת��Ϊ��Ӧ�ġ�Сʱ:����:�롱 ��ʽ��� 
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

//1096: ˮ�ɻ���������ר��,��ʵ����
//�������ʻ��ļ��ڣ�ˮ�ɻ��������������˵Ĵ�����ѧ���и�ˮ�ɻ�����������������ģ� ��ˮ�ɻ�������ָһ����λ�������ĸ�λ���ֵ������͵����䱾�����磺153 = 13 + 53 + 33������Ҫ�����������m��n��Χ�ڵ�ˮ�ɻ�����
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

//1097: ����ƽ���ɼ�������ר�⣩
//����ĳλͬѧ���ſεĳɼ������ƽ���ɼ�������ĳɼ���Ϊ�弶�Ƴɼ����弶�Ƴɼ�ת��Ϊ�ٷ�֮�ɼ��Ĺ������£�'A'ת��Ϊ�ٷ�֮�ɼ�Ϊ95�֣�'B'��Ӧ85�֣�C��Ӧ75�֣�'D'��Ӧ65�֣�'E'��Ӧ40�֡� �����ƽ���ɼ�Ϊһ��ʵ��������1ΪС����
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

//1098: ���Ϻ�����ֵ������ר�⣩
//�󸴺Ϻ���F(G(x))�����к���F(x)=|x-3|+|x+1|������G(x)=x^2-3x��Ҫ���д����funF()��funG()�ֱ���F(x)��G(x)�����๦����main()��ʵ�֡� 
//double funF(double x)
//    //��������F(x)��ֵ�� 
//double funG(double x)
//    //��������G(x)��ֵ�� 
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

//1099: �ǹȲ��루��ʵ�����ԣ�
//�κ�һ����Ȼ���������ż�����ͳ���2��������������ͳ���3�ټ�1����󣬾������ɴε����õ�1��Ҳ����˵�������������������ϳ���2�Ժ������1�����ڸ���һ����Ȼ��n�������ת��Ϊ1����Ҫ�Ĳ�����
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

#include<stdio.h>//�ݹ�
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

//1100: �������������ר�⣩
//����Ҫ�ٰ�����������ƾ����ˣ���������ͬ���ǣ����α����԰�Ϊ��λ��Ϊ��ȫ�����һ���༶������ˮƽ��Ҫ���һ�����mλͬѧ����ѡkλͬѧ������μӱ��������ж�������Ϸ�������Ȼ������������m!/(k!(m-k)!)��Ҫ���д����fact()��ʵ����һ�����Ľ׳˹��ܣ����������е��ô˺����� 
//long fact(long n)
//{
//    //��������ֵΪn�Ľ׳ˡ� 
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

//1101: �������֣�����ר�⣩
//����һ��������n������n��������m�����m��n�ĺ͡�Ҫ�������һ��inverse()������һ��main()������inverse()��������һ������ֵ,��������������������Ľ��ֵ������,������7631,��������1367 �� 
//int inverse(int n)
//{
//    //���㲢����n���������� 
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

//1102: ��Ʊ��Ʊ�Ѽ��㣨����ר�⣩
//2013���𣬻�Ʊ��Ʊ�ѱ����µ���Ʊ��˳�վ����ʱ��ǰ48Сʱ���ϵİ�Ʊ��5%����Ʊ�ѡ�ͬʱ����Ʊ��Ʊ�ѵļ��㷽�������������뵽ԪΪ��λ��������5��Ϊ��λ��β��С��0.25Ԫ����ȥ����С��0.25Ԫ��С��0.75Ԫ�ļ�Ϊ0.5Ԫ����С��0.75Ԫ�Ľ�Ϊ1Ԫ����дһ��������������Ʊ�ѣ��ٶ���Ʊʱ���������ʱ����48Сʱ���ϡ�����ԭ�����£�double CancelFee(double price);
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

//1103: ƽ��ѧ�ּ��㣨����ר�⣩
//ƽ��ѧ�ּ��㣨Grade Point Average����GPA������ѧ���뼨����Ϊ����ѧ��ѧϰ�������ʵļ��㵥λ����ȡ��һ����ѧ�ֺ�ƽ��ѧ�ּ�����Ϊ��ҵ�ͻ��ѧλ�ı�׼��ʵʩ�����Ľ������ͽ����Ľ�ѧ�����ƶȡ���ѧ��ÿһ�ſγ̶���һ����ѧ�֡�ֻ��ͨ�����ſεĿ��ԣ����ܻ����Ӧ��ѧ�֡��γ̼���ļ��㷽��ͨ���ǣ����ٷ��Ƴɼ� - 50) / 10 ȡ�����ɼ�100����Ӧ����Ϊ5���ɼ�90~99��Ӧ����Ϊ4��......���ɼ�60~69��Ӧ����Ϊ1���ɼ�С��60����Ӧ����Ϊ0��ƽ��ѧ�ּ���ļ��㷽���ǣ��ǽ�ѧ���޹���ÿһ�ſγ̵ļ�����Ը��ſγ̵�ѧ�֣��ۼӺ��ٳ�����ѧ�֡� ƽ��ѧ�ּ��������Ϊѧ��ѧϰ�������������ۺ�����ָ��֮һ�����̼���һ��ѧ����ƽ��ѧ�ּ��㡣
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

//1104: �����Ӻͣ�����ר�⣩
//����������n��2<=n<=1000�������㲢���n������������(����1������������)֮�͡�Ҫ�������һ��FacSum ()������һ��main()������FacSum ()�������㲢����n������������֮�ͣ����๦����main()������ʵ�֡� 
//int FacSum(int n) 
//{ 
////����n������������(����1������������)֮��sum������������sum 
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

// 1105: �ж��Ѻ����ԣ�����ר�⣩
//��������������m��n��˳�����m��n֮��������Ѻ����ԡ������������������������֮�ͣ�����1���������������ڶԷ����ͳ���������Ѻõġ����磺1184��1210���Ѻ����ԣ���Ϊ 1184������֮��Ϊ1+2+4+8+16+32+37+74+148+296+592=1210 1210������֮��Ϊ1+2+5+10+11+22+55+110+121+242+605=1184 Ҫ�������һ��facsum ()������һ��main()������facsum ()�������㲢����n������������֮�ͣ����๦����main()������ʵ�֡� 
// int facsum (int n) 
// { 
// //����n������������֮��sum������������sum 
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

// 1106: ������������ר�⣩
//һ������������������� �Ҷ�����֮Ϊ���������ʹ������������֮Ϊ����������һ���ģ����������ͽл�������������������m��n��m<n)���������[m��n]֮��Ļ�������
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

//1107: ���������루����ר�⣩
//һ��������������������Ҷ�����֮Ϊ���������ʹ������������֮Ϊ����������һ���ģ����������ͽл���������ȡһ����������������ǻ������������������ĵ�������ӣ�����Ͳ��ǻ����������ظ��������裬һֱ����û�����Ϊֹ�����磺68���154��68+86�����ٱ��605��154+451���������1111��605+506������1111�ǻ���������������ѧ�����һ�����룺���ۿ�ʼ��ʲô���������ھ������޴��������͵�������ӵĲ���󣬶���õ�һ��������������Ϊֹ����֪����������ǶԻ��Ǵ���������������֤֮�����Ѿ���д��һ���������������ĺ���inverse()����ô����ѭ������ģ��������������֤���̣�
// while( m = inverse(n), m != n)
// {
// ���n;
// ��n����Ϊ m + n;
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

//1108: ��ӡ����ͼ�Σ�����ר�⣩
//�Ӽ�������һ������n(1��n��9),��ӡ��ָ��������ͼ�Ρ�Ҫ���ڳ����ж��岢���ú���PrintLine()�����ͼ���е�һ�У������е����������m������ԭ�����£�
// PrintLine(int m)��
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

//1109: ����������ר�⣩
// ����һ���������������������������������ͨ����һ�����ĸ���λ�ϵ����ּ������õ�������õ�������һλ������ô�������������������������λ�����߰�������λ�����֣���ô�ٰ���Щ���ּ���������˽�����ȥ��ֱ���õ���һλ��Ϊֹ�����磬����24��˵����2��4��ӵõ�6������6��һλ�������6��24���������ٱ���39����3��9�������õ�12������12����һλ������˻��ð�1��2�����������õ�3������һ��һλ�������3��39�������� Ҫ��ʹ�ú��������庯��digitSum(int n)��n�ĸ�λ���ֺͣ����๦����main()������ʵ�֡� 
// int digitSum(int n) 
// { 
// //��������n�ĸ�λ����֮�� 
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

//1110: �����ͬ���ȣ�����ר�⣩
//����ͼ��ʾ����������1, 2, 3, ...�����һ�����޴�Ķ���������ĳһ����㵽���� �㣨�����1 �Ľ�㣩����һ��Ψһ��·���������10 ��������·����(10, 5, 2, 1)�� ��4 ��������·����(4, 2, 1)���Ӹý�㵽������·���ϵ����н���Ϊ�ý������ȡ����ڵ�������ǣ�����x ��y����x��y�������ͬ���ȣ����磬10��4�����ͬ������2��10��5�������ͬ������5�� ����ݹ麯�� 
// int common(int x, int y) 
// { 
// ���x==y, return x; 
// ���x>y����x/2��y�Ĺ�ͬ����; 
// ������x��y/2�Ĺ�ͬ����; 
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

//1111: ����������������������ר�⣩
//����n��n����������������˳���෴��˳�������n��������Ҫ��ʹ�����飬��ʹ�õݹ麯��ʵ�֡��ݹ麯��ʵ�ֹ������£�
// void inverse(int n)
// {
//     if(n >1)
//    {
//         (1) ����һ������������num;
//         (2)  �������n-1�����������: inverse(n-1);  
//         (3)  ���num��
//    }
//  if( n == 1)  ֱ�����num��   
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

//1112: ����ת��������ר�⣩
//����һ��ʮ��������n�������Ӧ�Ķ��������������õ�ת������Ϊ����2ȡ�࣬�������С�����һ��ʮ����������2���õ��������̣����õ������ٳ���2���������ƣ�ֱ���̵���0Ϊֹ����ȡ���õ���������Ϊ����Ķ������������磬��52����ɶ��������ļ����������ͼ��52����2�õ�����������Ϊ0,0,1,0,1,1���������У��õ�52��Ӧ�Ķ�������110100���õݹ��˼��������������������������ģ����n/2��Ӧ�Ķ���������Ȼ������%2���ݹ麯����ʵ�ֹ������£�
// void convert(int n)
// {
//    if(n > 0)
//    {
//       �����������n/2��Ӧ�Ķ�������;
//        ���n%2;
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

//1113: �ݹ���õĴ���ͳ�ƣ�����ר�⣩
//���³���Ĺ����Ǽ��� Fibonacci���еĵ�n�����fib()��һ���ݹ麯���������д�ó��򣬼����n���ͬʱ��ͳ�Ƶ����˶��ٴκ���fib������main()��fib()�ĵ��ã���
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
    printf("�ݹ������%d��", f);
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

//1114: �������飩
//����n��1<=n<=10����n�����������������n��������
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

//1115: ������Сֵ�����飩
//����a��n��Ԫ�أ������n��Ԫ�ص���Сֵ�����±ꡣ����Сֵ�ж����������±���С��һ����ע�⣬��Ч�±��0��ʼ��
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

//1116: ɾ��Ԫ�أ����飩
//����һ�������������������A��n��Ԫ�أ�ɾ���±�Ϊi��Ԫ�أ�ʹ���Ա�����������ע�⣬��Ч�±��0��ʼ�� �����������������ֱ�ʵ��ɾ��Ԫ�ز������������������
// void del(int a[], int n, int i);  /*ɾ������a���±�Ϊi��Ԫ��*/
// void PrintArr(int a[], int n); /*�������a��ǰn��Ԫ��*/
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

//1117: ��������Ԫ�أ����飩
//��д��������n��1<=n<=10),����n����������һ�����飬��������x������������в���x�Ƿ���ڣ�������ڣ�ɾ��x������Ԫ��������ǰ����λ�������ɾ��Ԫ�غ�����顣��������ڣ������Not Found��������һ�����Һ���find(),������a�в���x�����Ҳ�����������-1�����ҵ�����x���±꣬����ԭ�����£�int find(int a[], int n, int x); Ȼ����main()�У��ȵ��ú���find(),������ʧ�������Not Found"�������ҳɹ����������һ���ж���ĺ���del()ɾ����Ԫ�أ��ٵ�����һ���е�PrintArr()���ɾ��Ԫ�غ���������ݡ�
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

//1118: ���������Ԫ�����
//һ���ǵݼ����������������n��Ԫ�أ�����һ������num����num��������е��ʵ�λ�ã�ʹ�����Ա��ַǵݼ�����Ҫ����һ������insert()��������num����������a���ʵ�λ���ϣ�����ԭ�����£�void insert(int a[], int n, int num);���⺯����Ȼ������ǰ������ĺ���PrintArr()�����������Ԫ�ء�
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

//1119: һά�����������飩
//��һά���鰴�մ�С�����˳�����򡣳����庯��sort()��ʵ������a�����򡣺���ԭ�����£�void  sort(int a[], int n);����Ԫ�ص��������PrintArr()��
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

//1120: ��ֵ����
//��һ������Ϊn���������С���дһ�������Ȱ������е���Сֵ���һ�����������ٰ����ֵ�����һ�������������ת���õ����С� �ֱ��д��������MinIndex()��MaxIndex()��������Сֵ�±�����ֵ�±ꡣint MinIndex(int a[], int n);  //������������a����СԪ�ص��±�int MaxIndex(int a[], int n);  //������������a�����Ԫ�ص��±�����Ԫ�ص�������ú���PrintArr()��
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

//1121: ����
//��ĳһ�߲㽨����ֻ��һ�����ݣ����㰴��һ����ʱ�����ݻ����е���һ�㡣��֪����ÿ����һ����6�룬�½�һ����4�룬����Ҫͣ�����ǲ�ͣ��5�롣����N��������ɵ�һ�������б����ݽ�������Ӧ�����ݴ�0�㿪ʼ���У��������й��̽���֮ǰ���᷵��0�㡣 ע�⣬��������������������ȣ�������ͬһ��ִ����������ͬ���񣬿������Ϊ�������Ѿ�ͣ��5�룬��Ҫ����ʱ��������ͬһ�㰴���ż��������ֿ��Ų�ͣ��5�롣
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

//1122: С���ĵ�����ҵ
//С������ʦ������һ�ݵ�����ҵ��С������ѧУ����һЩͬѧһ����һ���ʾ���飬������С��Ϊ��ʵ��Ŀ͹��ԣ��������Լ��ļ����֪ʶ�����Լ��������ü����������N��1��1000֮������������0<N��1000�������������ظ������֣�ֻ����һ������������ͬ����ȥ������ͬ������Ӧ�Ų�ͬ��ѧ����ѧ�š�Ȼ���ٰ���Щ����С�������򣬰����źõ�˳��ȥ��ͬѧ�����顣����Э��������ɡ�ȥ�ء��롰���򡱵Ĺ�����
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

//1123: �ɼ�����
//��������ĳ�ſγ̵ĳɼ��������㰴�ɼ��Ӹߵ��ͶԳɼ�������������������ͬ�����������ֵ���С����ǰ��
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

//1124: ������������ϲ�
//��֪����a����m�����������е�Ԫ�أ�����b����n�����������е�Ԫ�أ���̽�a��b�е�����Ԫ�ذ������������c�С�
#include<stdio.h>//��ʱ
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

//1125: �����Ǿ�����ж�
//��д��������һ��������n��1<=n<=10����n�׷���a�е�Ԫ�أ����a�������Ǿ��������YES�������������NO���� �����Ǿ������Խ������£����������Խ��ߣ���Ԫ�ض�Ϊ0�ľ������Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�Ҫ���庯��IsUpperTriMatrix()�жϾ���a�Ƿ��������Ǿ�������Ƿ���1�����򷵻�0������ԭ�����£�
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

//1126: �����������ż��
//һ���������������ż�������ԣ����ҽ��� ÿ�С�ÿ���ܺ�Ϊż����������ż����1�����������4*4�ľ���;�����ż�������ԣ�
// 1 0 1 0
// 0 0 0 0
// 1 1 1 1
// 0 1 0 1
// ��д���򣬶���һ��n�׷��󲢼�����Ƿ������ż�������ԡ����û�У���ĳ���Ӧ���ټ��һ�����Ƿ����ͨ���޸�һλ����0��Ϊ1����1��Ϊ0����ʹ��������ż�������ԣ���������ܣ��������ͱ���Ϊ���ƻ��ˡ����岢�������º�����
// //int BalanceMatrix(int a[], int n);
// ��������1��ʾ�þ��������ż�������ԣ���������2��ʾ����ͨ���޸�1λ���ﵽ��ż���ƣ���������-1��ʾ�þ������ƻ��ˣ��޷��ָ���
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

//1127: ����˻�
//������������A��B�ĳ˻���
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

//1128: �γ�ƽ����
//��ĩ���Խ������������õ��˱���ѧ���ĳɼ����ܱ���m��n�����(���๲��m��ѧ������ѧ����n�ſγ�),ÿ����һ��ͬѧ��n�ſγ̳ɼ������д���򣬼��㲢���ÿ�ſε�ƽ���֣��������2λС����
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

//1129: �ڼ���
//��֪����2012-1-1�Ǹ���ĵ�1�죬��9999-9-9�أ�����һ����������ڣ�����������Ǹ���ĵڼ��졣
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

//1130: �������
//���ǵ���ѧʱ��ѧ������������𣿾���Ķ������ﲻ������������Բο����µ�ͼ�Σ� 
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

//1131: ����ַ�
//Ӣ����ĸ�����Ƶ����ߵ����ĸ���ĸ��? ����һ���ַ���������ַ����г��ִ���������ĸ��
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

//1132: �����ַ�ͳ��(��ʵ��)
//���ڸ�����һ���ַ�����ͳ�����������ַ����ֵĴ������ַ������Ȳ�����1000.
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

//1133: ���ʸ���ͳ��
//�Ӽ�������һ���ַ�������С��1000��ͳ�����е��ʵĸ������������Կո�ָ����ҿո��������Ƕ����
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

//1134: �ַ���ת��
//����һ���Իس��������ַ������������ֺ���ĸ��ɣ�����˵����з������ַ���Ȼ�������ַ���ת����ʮ�������������2�����
#include<stdio.h>//���д���
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

//1135: ��˼�
//����ÿ�춼Ҫ��ȥ��ˣ����ǻ����󣬶����ǮҲ������һ�������׻��˶���Ǯ����һ�ʺ�Ϳ�ʡ����ں��ˣ���Ϊ�ö��ӣ�Ů����������Ը����ó�����һ���ˣ��Ǻǡ�
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

//1136: ����ĸ���д
//����һ��ֻ������СдӢ����ĸ�Ϳո�ľ��ӣ���ÿ�����ʵĵ�һ����ĸ�ĳɴ�д��ĸ��
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

//1137: �������Ԫ��
//����������ַ������������е������ĸ���ڸ���ĸ��������ַ�����(max)����
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

//1138: C���ԺϷ���ʶ��
//����һ���ַ������ж����Ƿ���C�ĺϷ���ʶ����
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

//1139: �������ַ���
//����n��n���ַ��������������̵��ַ�������������ͬ��������ֽ������һ����
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

//1140: С������nλ(��ʵ��)
//����һ��С��x���������С������nλ��ʲô��1 <= n <= 6��
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

//1141: ����ת��
//��ʮ��������nת���ɶ����ƣ����������ַ������У���������Ҫ���岢����convert()����, ��ʮ��������n��Ӧ�Ķ������������ַ�����str�С�
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

//1142: ���������Ĵ�С
//��������2 ���Ƶ�����Ҫ������������������Ӧ��ʮ������������С�����˳���䡣 Ҫ�������һ��bToD()������һ��main()������bToD() �����Ĺ����ǽ���������ת��Ϊʮ�������������๦����main()������ʵ�֡� 
// int bToD(char str[]) 
// {
// //�������ض�������str��Ӧʮ�������� 
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

//1143: ���ֵ�����ֽ���
//����n������ÿ�����Ľ���������������kָ����k>=2��k<=10�� �����������Ӧ��ʮ�������� Ҫ�������һ��KTod()������һ��main()������KToD() �����Ĺ����ǽ�k������ת��Ϊʮ�������������๦����main()������ʵ�֡� 
// int KToD(char str[], int k) 
// { 
// //��������k������str��Ӧʮ�������� 
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

//1144: ���ֽ���
//����һ��ʮ��������n��ת����2��3��7��8������� Ҫ�������һ��dToK()�����������ǽ�ʮ������ת��Ϊk�������������๦����main()������ʵ�֡� 
// void dToK(int n, int k, char str[]) 
// { 
// //��nת��Ϊk������������str 
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

//1145: ���������̱�2��
//ĳ��������һ����̱�����̱������ʾһ��������Ϊ�ó��߹��Ĺ�������Ȼ�������̱��и�ë���������Ǵ�3�䵽5������������4����̱�����λ����λ�� ʮλ����λ�ȣ��ϵ����ֶ�����ˡ����磬�����̱���ʾ15339,�����߹�1����֮�󣬸���̱���ʾ15350��
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

//1146: ���ǹ�
//HOHO�����ڴ�Speakless����Ӯ�������е��ǹ�����Gardon���ǹ�ʱ�и�������ã����ǲ�ϲ���������γ�һ�����ǹ���ϲ���ȳ�һ��A������ǹ�����һ�λ�һ�ֿ�ζ����һ��B������ǹ�������������Gardon��֪���Ƿ����һ�ֳ��ǹ���˳��ʹ�����ܰ������ǹ������ꣿ����д�������æ����һ�¡� 
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
    //ʣ�µ��ǹ�����sum-max����������һ���м�Ŀ�max-1��˵������ʵ�ֲ��ظ�����
    if (max - 1 <= sum - max)
        printf("Yes\n");
    else
        printf("No\n");
    }
    return 0;
}

//1147: ����������
//���������������飬����a��n��Ԫ�أ� ����b��m��Ԫ�أ�1<=m<=n<100,���������b�Ƿ�������a�������顣��������a��ĳ��Ԫ��a[i]��ʼ����b[0]=a[i],b[1]=a[i+1],......��b[m]=a[i+m]���������b������a�������顣
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

//1148: �����λ��֮һ
//��1��2��3��4��5��6��7��8��9��ϳ�3��3λ����Ҫ��ÿ�����ֽ�ʹ��һ�Σ�ʹÿ��3λ����Ϊ��ȫƽ����������С�����˳�������������λ����
#include<stdio.h>
int main()
{
    printf("361 ");
    printf("529 ");
    printf("784");
    return 0;
}

//1149: �����λ��֮��
//��1��2��3��4��5��6��7��8��9�����������λ����ÿ����ֻ����һ�Σ�,�ڶ������ǵ�һ������2�������������ǵ�һ������3������������λ�����Ƕ��٣��𰸿����кܶ��飬�밴��һ����������˳�����ÿ���������λ����
#include<stdio.h>
#include<string.h>
//�ж������λ���Ƿ����ظ�������,û���ظ�����1,��λʮλ��Ϊ0
int doub(a)
{
    if ((a % 10 != a / 100) && (a / 100 != a / 10 % 10) && (a % 10 != a / 10 % 10) && a % 10 != 0 && a / 10 % 10 != 0)
        return 1;
    return 0;
}
//�ж�������λ���Ƿ����ظ�������,û���ظ�����1
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
        //����������û���ظ�������
        if (doub(i) && doub(2 * i) && doub(3 * i))
        {
            //��������û���ظ�������
            if (Isrepeat(i, 2 * i) && Isrepeat(2 * i, 3 * i) && Isrepeat(i, 3 * i))
            {
                printf("%d %d %d\n", i, 2 * i, 3 * i);
            }
        }
    }
    return 0;
}

//1150: �������ٸ�����
//С������ʦ��С������һ����Ŀ������һƪ���³����˶��ٸ����֣����������ɡ�
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

//1151: �������ӷ�
//�����������������������ļӷ����㣬����ͨ�ļ��������޷����С�������������дһ����������������

//1152: ��������
//�����������в���ĳһԪ��x��
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

//1153: ���װ������(��ʵ��)
//����һ����(δ����)���������һ�����������������������������������ĳ��ȡ� ���磺��������ǣ�1�� 2�� 3�� 3�� 4�� 4�� 5�� 5�� 5 ��6, ����ֻ��6������1, 2, 3-3, 4-4, 5-5-5 and 6. �����5���飬����Ϊ3���������3�� 
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

//1154: У�������
//ĳУ�����ⳤ��ΪL ����·����һ������ÿ�������ڵ���֮��ļ������1 �ס����ǿ��԰���·����һ�����ᣬ��·��һ��������0 ��λ�ã���һ����L ��λ�ã������ϵ�ÿ�������㣬��0��1��2��������L��������һ������ ������·����һЩ����Ҫ��������������Щ�����������������ϵ���ʼ�����ֹ���ʾ����֪��һ�������ʼ�����ֹ������궼������������֮��������غϵĲ��֡�����Ҫ����Щ�����е�������������˵㴦�������������ߡ���������Ǽ��㽫��Щ�������ߺ���·�ϻ��ж��ٿ�����
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

//1155: �ַ����Ƚϣ���ʵ����
//�Ƚ��ַ�����С�����ȽϵĹ���ͬ�ֵ�������ַ��Ƚ��¹������£�A < a < B < b < �������� < Z < z��
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

//1156: �����临��
//����һ������Ӣ�ﵥ�ʣ�����Ӣ���﷨����ѵ�����ɸ������������£� ��1�� �Ը�����ĸy��β����yΪi���ټ�es�� ��2�� ��s, x, ch, sh��β�����es�� ��3�� ��Ԫ��o��β�����es�� ��4�� �����������s��
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

//1157: ������n��1
//��������ݶ�����0��1��ɵģ����ų�����0101001110101111011��Ҫ�ҳ�����n��1���Ӵ��ж��ٸ���ȷʵ�鷳��������ʵ�ְɡ�
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

//1158: ��������ָ��ר�⣩
//��������ĸ��������ɴ�С��˳������� �Ѷ�������swap��������ʵ���β�pa��pb��ָ�ڴ浥Ԫ�����ݽ����������ʹ�ñ�����ʵ�������������ݵĻ����� 
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

//1159: ������������ָ��ר�⣩
//��n�������е���������Ԫ�ء�Ҫ����һ������LargestTow()��������a����������Ԫ�أ��ֱ�����β�ָ��pfirst��psecond��ָ�洢��Ԫ������ԭ�����£�
// void LargestTow(int a[],int n,int *pfirst,int *psecond) 
// { 
// /*����a��n��Ԫ�أ��������е����ֵ�����β�ָ��pfirst��ָ�ڴ浥Ԫ���������еڶ����ֵ�����β�ָ��psecond��ָ�ڴ浥Ԫ�� */
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

//1160: ��������ֵ��ָ��ר�⣩
//�ҳ�һ��2��3�����������е����ֵ�������±�����±꣬Ҫ����ú���FindMax(int p[][3], int m, int n, int *pRow, int *pCol)ʵ�֣����±�����±����β�����ָ�����ʽ���ء� 
// void FindMax(int p[][3], int m, int n, int *pRow, int *pCol)
// { 
// //��m*n����p�в������ֵ���������±����pRow��ָ�ڴ浥Ԫ���������±����pCol��ָ�ڴ浥Ԫ 
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

//1161: �ַ������ȣ�ָ��ר�⣩
//��дһ����len����һ���ַ����ĳ��ȣ�ע��ó��Ȳ��ƿո�Ҫ�����ַ�ָ��ʵ�֡����������������ַ��������ø�len����������䳤�ȡ� 
// int len(char *sp) 
// { 
// //ʵ��sp��ָ���ĳ��ȣ����ƿո� 
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

//1162: ѭ���ƶ���ָ��ר�⣩
//��n��������ʹǰ�����˳������ƶ�k��λ�ã��Ƴ������ٴӿ�ͷ���롣����ƶ��������Ԫ�ء� ��Ŀû�и�����n�ķ�Χ��ϣ�������n֮����malloc()������̬�����ڴ�ռ䣬��Ҫ��ǰ��������Ĵ�С����Ҫ͵��Ŷ�� ����Ҫ���岢ʹ�ú���ringShift() 
// void ringShift(int *a, int n, int k) 
// { 
// //ѭ���ƶ������ֵ��Ȼ��������a�� 
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

//1163: �׺ʹ����ַ�����
//�ж��׺ʹ����׺ʹ��Ķ����������ģ����������ַ���s1��s2,�����ͨ��s1ѭ����λ��ʹs2������s1�У���ô���Ǿ�˵s2 ��s1���׺ʹ���
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

//1164: �������⣨�ַ�����
//LittleTom������һ����������ϵͳ������ϵͳ��Ҫ���û��ύ�����Ĵ������ɿ�ִ���ļ���Ȼ�����С����û����ύʲô���Ĵ������޷�Ԥ֪�ģ�����LittleTom���˳�ֵ�׼����������ֹ�����������ļ�ϵͳ����ֹ����������ע�����ֹ��������޸�ϵͳ���á���ֹ�������ر�ϵͳ����ֹ��������޻�Ƿ�ʹ���ڴ桢��ֹ������������ʱ�䳬���趨ʱ��ȡ���Щ����LitteTom������ɡ�����һ����������������жϽ���������ȷ�ԡ�����ϵͳ��Ҫ�ѽ���������������ļ�����ȷ������ļ����бȽϣ���������ļ���ȫ��ͬ��������ϵͳ���ء�Accepted����������������ļ����˿հ׷�(�ո�' ', �Ʊ��'\t', �� �س���'\n')֮���������ݶ���ͬ��������ϵͳ���ء�Presentation Error������������ϵͳ���ء�Wrong Answer�������������ļ���һ��������ȷ�����һ�������û��Ľ��������������������Ǽ�������ϵͳӦ�÷���ʲô��Ϣ��

//1165: ʵ����С�����֣�ָ��ר�⣩
//����һ��ʵ���������ʵ����С�����֣�С�������������ĩβ0����ȥ����������111111.12345678912345678900 �����0.123456789123456789����ȥ��ĩβ0֮��С������Ϊ0���������No decimal part����ע���ʵ����λ��������100λ�� �붨�岢ʹ�����º����� 
// char *decimal(char *p) 
// { 
// ���ַ���p��ʾ��ʵ������С���㿪ʼ��С�����ִ���һ���ַ��������ɺ������أ���pΪ��123.456�����򷵻ص��ַ���Ϊ��.456������С������Ϊ0,���ؿ�ָ��NULL�� 
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

//1166: ʵ��ȡ����ָ��ר�⣩
//����һ��ʵ�������ʵ�����������֡�ע���ʵ����λ��������100λ��������������ֿ��ܺ��в���Ҫ��ǰ��0�����ʱӦȥ������Ȼ������������Ϊ0�����0����ȥ����������0023.56732�����ӦΪ23��������0023��0.123��Ӧ�����ӦΪ0����Ȼ����Ҳ���ܲ���С�����֡� Ҫ���岢ʹ��rounding()������ԭ�����£� 
// char *rounding(char *p) 
// { 
// //���ַ���p��ʾ��ʵ��ȡ���������µ��ַ��������ɺ������� 
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

//1167: ��ת����ָ��ר�⣩
//�������һ����������������ܴܺ��������100λ�����������������ת���� ��ת���������£� 1.һ��ĩβû��0��������������ת�����Ǹ�λ������������� 2.һ����������ת�����Ǹ����� 3.һ��ĩβ��0��������������ת����ͬ������ reverse (1200) = 2100 reverse (-56) = -65 Ҫ���岢ʹ�����º����� 
// void reverse(char *str) 
// { 
// //�������str����ת��������str�� 
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

//1168: �˵���ָ��ר��,��ʵ����
//ÿ����ĩ��С���ͻ������µ�֧���˵����������ͳ�ơ��������Ѿ��ռ���ѧУ԰������С�����õ��԰�æ��������顣���������ΪС����һ������������������ɡ�
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

//1169: ��������ָ��ר�⣩
//����3����������λ��������100λ������С�����˳�����������������Ҫ���岢ʹ�����º����Ƚ������������Ĵ�С�� 
// int cmp(char *a,char *b) 
// { 
// //��������a����b������1�� 
// //��aС��b������-1�� 
// // ��a��b��ȣ�����0 
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

//1170: ��ַ�����ָ��ר�⣩
//�������ַ����������ַ�����Ҫ���岢ʹ�ú���maxLenStr()�� 
// void maxLenStr(char *str[], int n, int *max) 
// { 
// ���ַ�������str���ҳ����һ���ַ������������±�����β�ָ��max��ָ�ڴ档 
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

//1171: ���ܣ�ָ��ר�⣩
//��һ�����ļ��ܡ����ܵĹ������£���ÿ���ַ���ascii���ֵ��ȥ24��Ϊÿ���ַ����ܺ��ֵ������'a'��ascii���ֵΪ97����ô���ܺ�ͱ����73��"73"����'a'�����ģ����磬�ַ���"abc"���ڼ���֮���Ϊ"737475"��������������ٽ��з�ת���õ����յ�����"574737"�����������д���򣬶�һ�����ּ��ܡ��붨�岢ʹ�����º����� 
// void encrypt(char *plain, char *cipher) 
// { 
// //��ԭ���ַ���plain���ܺ�����ַ���cipher 
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

//1172: ����߽�ͣ�ָ��ר�⣩
//����һ��m��n�еĶ�ά�����������ܱ�Ԫ�غ͡�1<=m��n<=100000��������1��100000�У�Ҳ������10000��50�У�����֤����Ԫ�ز�����500000������ܲ���Ԥ��������Ĵ�С�ˣ���Ҫѧ��ʹ�ö�̬�ڴ����Ŷ������Զ�̬����m*n���ڴ浥Ԫ��Ȼ����һά�������洢��ά���飬��ά����Ԫ��a[i][j]��Ӧһά����a[i*n+j]��i��j����0��ʼ��
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

//1173: ������ܣ�ָ��ר�⣩
//�м��ܵ�ȻҲ�н������������������ܰɡ���֪������ֻ�����ֺ���ĸ���Ҽ��ܵĹ������£���ÿ���ַ���ascii���ֵ��ȥ24��Ϊÿ���ַ����ܹ�������ģ�����'a'��ascii���ֵΪ97����ô���ܺ�ͱ����73��"73"����'a'�����ġ����ԣ��������ǡ�757392��������ܺ��ԭ���ǡ�cat�������������д���򣬽�һ�����Ľ���Ϊԭ�ġ��붨�岢ʹ�����º��� 
// void decrypt(char *cipher, char *plain) 
// { 
// //������cipher���ܺ����Ĵ���plain 
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

//1174: ����������ָ��ר�⣩
//��������������n Ȼ������n��λ��������100λ�Ĵ�������������������ܺ���ǰ��0������n�������������������������ǰ��0�� 
// int greater(char *s1, char *s2) 
// { 
// ��s1ָ�����������s2ָ�������������һ��������; 
// ��s1ָ�������С��s2ָ������������ظ�����; 
// ��s1ָ�����������s2ָ�������������0; 
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

//1175: ����ת�ã�ָ��ר�⣩
//����һ��m��n�еĶ�ά���������ת�þ���1<=m��n<=100000��������1��100000�У�Ҳ������10000��50�С�����ܲ���Ԥ��������Ĵ�С�ˣ���Ҫѧ��ʹ�ö�̬�ڴ����Ŷ��
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

//1176: ��������ַ�����ָ��ר�⣩
//�Ӽ������������ַ�����ÿ����������5���ַ���û�пո񣩣��á�*****����Ϊ����������ı�ǡ���������������ַ����У��ҳ�һ�����Ĵ���������ô���Ҫ����󴮵Ĳ���ͨ�����ñ�д�ĺ���ʵ�� 
// void find(char *name[], int n, int *p) 
// { 
// //�ڰ���n���ַ����Ķ�ά�ַ�����name�У�����ֵ�����ַ����������±����ָ��p��ָ�ڴ浥Ԫ 
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

//1177: ��Ҫ������ָ��ר�⣩
//����n��n��������Ȼ��Ҫ������������1������������������У�������2������������������У�������3�������������ֵ�����������С�Ҫ�����ṹ���£������Ƴ���
// void sort(int a[], int n, int (*cmp)());
// int CmpAsc(int x, int y); /*������Ҫ���ж���Ԫ���Ƿ�����*/
// int CmpDec(int x, int y); /*������Ҫ���ж���Ԫ���Ƿ�����*/
// int CmpAbsAsc(int x, int y);  /*������ֵ����Ҫ���ж���Ԫ���Ƿ�����*/
// int main(void)
// {
//     int a[10],i,n; 
//     int slt;
//     /*����n��n����������������a*/
//     /*�����û���ѡ�񣬴���slt; */
//     switch(slt)
//     {
//         case 1:   sort(a, n, CmpAsc); break;
//         case 2:   sort(a, n, CmpDec); break;
//         case 3:   sort(a, n, CmpAbsAsc);break;
//     }
//     /*�������������*/
//     }
// void sort(int a[], int n, int (*cmp)())
// { 
//     /*������a��������ԭ����cmpָ������cmpΪ�棬��ʾ��Ԫ������*/
// }
// int CmpAsc(int x, int y)
// {
// //���x>y����1�����򷵻�0�� 
// }
// int CmpDec(int x, int y)
// {
// //���x<y����1�����򷵻�0��
// }
// int CmpAbsAsc(int x, int y)
// {
// //���abs(x)>abs(y)����1�����򷵻�0
// //���abs(x)==abs(y) �� x>y  ����1�����򷵻�0
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

//1178: ������(��ʵ��)
//ͳ��һƪ�����ﲻͬ���ʵ�������
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

//1179: ���κ궨��(����ר�⣩
//�Ӽ������������ַ����ÿո������ʹ�ô��κ궨��1��SWAP���������ַ����Ӵ�С��˳����������� �궨��1��#define SWAP(a, b, t) { t=a; a=b; b=t; } �볢�ԣ�����ú궨��2�е�SWAP����������Ҫ����޸Ĳ��ܵõ���ȷ����� �궨��2��#define SWAP(a, b, t) t=a; a=b; b=t; 
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

//1180: �ɼ�ͳ�ƣ��ṹ��ר�⣩
//�Ӽ����������ɸ�ѧ������Ϣ��ÿ��ѧ����Ϣ����ѧ�š�������3�ſεĳɼ�������ÿ��ѧ�����ܷ֣�����ܷ���ߵ�ѧ������Ϣ��
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

//1181: ˭��������С���ṹ��ר�⣩
//���һ���ṹ�����ͣ������������������ڡ����г��������ְ����ꡢ�¡�����������Ϣ������n�����ѵ���Ϣ�����������С�ĺ��ѵ������ͳ������ڡ�
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

//1182: �������������򣨽ṹ��ר�⣩
//����õ���������㣬С��ϣ���Լ��ܴ������˿��֣�����С����ÿ���������յ�ʱ��ȥһ������ף����С��ϣ�����Լ���ͨѶ¼�����ѵ������������������Ͳ鿴����������ˣ�Ҳ���������ѵ����ա�Ϊ��С��������Ը�����������ɡ�С���ĺ�����Ϣ�����������������ڡ����г��������ְ����ꡢ�¡�����������Ϣ������n�����ѵ���Ϣ�������յ��·ݺ���������������к�����Ϣ��
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

//1183: ƽ�������һ�����ṹ��ר�⣩
//ƽ������n���㣬�����Ϊ�������밴������ԭ�㣨0,0�������Զ�������е���������������Լ�д��������Ҳ������qsort�⺯������
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

//1184: ƽ������򣨶������ṹ��ר�⣩
//ƽ������n���㣬�����Ϊ��������������ͬʱ�����������򣬷��򰴺��������򡣱���Ҫ���ýṹ��洢���꣬�ٽ�����������������������ٽ�����������������Լ�д��������Ҳ������qsort�⺯������
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

//1185: �����ǣ��ṹ��ר�⣩
//һ�죬С������Ժ���������ǣ�Gardon�ͳ��˸����������Gardon����ջ�����һ����������������������������ж��ٿ����ǣ��ʴȵ��ϵۻ�Ϊ�������ÿ�����ǵ����ꡣ��С���������žͿ������ۣ�������ԭ���ǣ���Ը����һ�Σ����ɴ��һ�������С���������������ǵ����궼�����㣬���ܷ�����������ش�������������ǵ�����λ����ͬ������Ϊһ�����ǣ�����������ǵĸ�����
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

//1186: ��ѧ�𣨽ṹ��ר�⣩
//ĳУ���Ž�ѧ��5�֣���ȡ��������ͬ�� 1.������ѧ��ÿ��8000����ĩƽ���ɼ�>80�����ڱ�ѧ�ڷ������Ĵ��ڵ���1ƪ�� 2.���޽�ѧ��ÿ��4000����ĩƽ���ɼ�>85���Ұ༶����ɼ�>80�� 3.�ɼ����㽱��ÿ��2000����ĩƽ���ɼ�>90�� 4.������ѧ��ÿ��1000����ĩƽ���ɼ�>85������ʡ��ѧ���� 5.�༶���׽���ÿ��850���༶����ɼ�>80��ѧ���ɲ��� ֻҪ���������Ϳ��Եý���һ�˿ɼ�ö��ѧ������ĳ������ĩƽ���ɼ�87���༶����ɼ�82������ѧ���ɲ������ͬʱ������޽�ѧ��Ͱ༶���׽�����������4850���ָ�������ѧ������������ĩƽ���ɼ����༶����ɼ����Ƿ�ѧ���ɲ����Ƿ�����ʡ��ѧ���������������������ĸ�ͬѧ��õĽ���������ߣ��ж�����ֵ�������һ�����ֵġ�
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

//1187: �����ǣ��ṹ��ר�⣩
//����쵽�ˣ������ѧԺ����������ڳﱸ�У�������һ���´��⣺���μ���������ѧ���������һ�������ǣ�����ʦ��������ǵ����񽻸�С���ˣ���ָ����Ҫ��İ����ǵ�Ʒ�ƺ�Ʒ�֡��׻�˵�úã��������Ҳ��Կ���С���������̵꣬���˸������������ְ����ǵļ۸񣬲�����ˣ�������ס��ÿ�����̵Ĵ��������֪С�����㹺��n�������ǣ���������Ҫ������Ǯ��
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

//1188: ѡƱͳ�ƣ�һ�����ṹ��ר�⣩
//ĳ��λ����ѡ�٣���5λ��ѡ�ˣ�zhang��wang��zhao��liu��miao����д����ͳ��ÿ�����õ�Ʊ����Ҫ��ÿ�˵���Ϣ����������֣�name��votes���ֱ���������������Ʊ����ÿ���˵���Ϣ��һ���ṹ������ʾ��5���˵���Ϣʹ�ýṹ�����顣
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

//1189: ѡƱͳ�ƣ��������ṹ��ר�⣩
//�������ͨ�Ź���ѧԺ2012��ѧ������ϯͶƱѡ�ٹ�������1��6���ڵ��¥ǰ¡�ؾ��С�����ͶƱ�����õ���ͳ��ѡƱ�ķ�ʽ����ͶƱѡ����ʽ��ʼ��ͬѧ�ǽ��Ŷ�һһ�ߵ�����ǰ��Ͷ���Լ���ʥ��һƱ���ڵ���ǰ����һ��������Ȼ������س���ʾȷ�ϡ� ����ͬѧͶƱ������������Աֻ��Ҫ����һ����#�����س�ȷ�ϣ���ʾͶƱ����������������ʾ����Ʊ��ߵ�ͬѧ��������ͬѧ����ѡΪ��һ��������ͨ�Ź���ѧԺѧ������ϯ�� ѡ�ٴ���׼���������ڽ��Ž��У����ͳ��ͶƱ�Ĺ����ͽ������ˡ�
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

//1190: ��ѯ��¼���ṹ��ר�⣩
//��һѧ���ɼ�������ѧ�š�������3�ſγ̳ɼ�����ʵ�����²��ҹ��ܣ�����һ��ѧ����ѧ�ţ������ѧ��ѧ�š�������3�ſγ̳ɼ� 
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

//1191: ��Ӽ�¼���ṹ��ר�⣩
//��һѧ���ɼ�������ѧ�š�������3�ſγ̳ɼ�����֪�óɼ���ѧ��������������ʵ�֣����һ���µ�ѧ����Ϣ����ʹ�ɼ����԰�ѧ������������ӵ�ѧ��������ѧ���ظ��������������Ϣ���ܾ���ӡ�
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

//1192: ɾ����¼���ṹ��ר�⣩
//��һѧ���ɼ�������ѧ�š�������3�ſγ̳ɼ�����ʵ������ɾ�����ܣ�����һ��ѧ����ѧ�ţ�ɾ����ѧ����������Ϣ��
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

//1193: ���Ƴɼ����򣨽ṹ��ר�⣩
//��һѧ���ɼ�������ѧ�š�������3�ſγ̳ɼ����밴Ҫ�����������������1���򰴵�1�ſγɼ���������ɼ���������Ϊi��1<=i<=3)���򰴵�i�ſγɼ���������ɼ���
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

//1194: �ܳɼ����򣨽ṹ��ר�⣩
//��һѧ���ɼ�������ѧ�š�������3�ſγ̳ɼ����밴���¹������򣺰��ܳɼ������������ܳɼ���ͬ������������������������ͬ����ѧ����������
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
            if (stu[j].sum < stu[j + 1].sum) //�Ƚ��ܷ���
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

//1195: ����ѡ�������ṹ��ר�⣩
//nֻ����Χ����һ��Ȧ����˳ʱ�뷽���1��n��š�Ȼ���1�ź��ӿ�ʼ��˳ʱ�뷽���1��ʼ����������m�ĺ��ӳ��֣��ٴӸճ��ֺ��ӵ���һ��λ�����¿�ʼ����������ظ���ֱ��ʣ��һ�����ӣ������Ǵ�����
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

//1196: �����ǣ��������ṹ��ר�⣩
//һ�죬С������Ժ���������ǣ�Gardon�ͳ��˸���������������������ϵ���������ж��ٸ�����ͬһ��ֱ���ϵġ����ϵ�����̫���ˣ�С�����ϾͿ������ۣ�����д����������������ô��
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

//1197: ����������һ�����ṹ��ר�⣩
//��������о������Ե��ϻ����Ը���ͳ���ԵĴ�ֹ������ƣ��ܹ���n���⣬ÿ�����ж�Ӧ��ֵ���������ܳɼ����ָ���¼ȡ�����ߣ�����д�����ҳ����ͨ�������ߵĿ������������ǵĳɼ��������ӡ��
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

//1198: ��������������(�ṹ��ר��)
//ACM ���ʴ�ѧ��������ƾ�����Ӣ��ȫ�ƣ�ACM International Collegiate Programming Contest��ACM-ICPC �� ICPC���������������Э�ᣨACM������ģ�һ��ּ��չʾ��ѧ�������������ŶӾ������ѹ���±�д���򡢷����ͽ��������������Ⱦ���������30����ķ�չ��ACM ���ʴ�ѧ��������ƾ����Ѿ���չ��Ϊ���Ӱ�����Ĵ�ѧ�������������һ��ͼ��Ϊ ACM �����ˣ���Ȼ������˵Ӧ�ü�Ƴ� ICPC �Ŷԣ��� ACM �����ļƷֹ������£� ���Ȱ��չ�������������������ͬ�Ķ��鰴�շ�ʱ��������ʱС�Ķ�������ǰ�棩�������ʱҲ��ͬ����Ϊ������ͬ��������ͬʱ���������϶��� id ��С�Ķ�������ǰ�棩�� ���ڷ�ʱ�ļ��㡣��������ķ�ʱ���ڸöӸ���ķ�ʱ֮�͡�����ĳ��ķ�ʱ�������������û��ͨ����û����ȷ�ύ����������ķ�ʱΪ 0�����������ķ�ʱΪ���ӱ�����ʼ�������һ����ȷ�ύ������ʱ�� + ��һ��ͨ��֮ǰ�Ĵ����ύ���� * 20 ���ӡ� ���磺ĳ�ο���һ��8�⣨A��B��C��D��E��F��G��H����ÿ���������ⶼ�ڶ�Ӧ��������и�������ǣ�������ʾ��ѧ���ڸ������й��Ĵ����ύ�������������ڻ�û��AC��������ʾAC���ĵ�ʱ�䣬�������a����һ�����ţ������и�����b���Ǿͱ�ʾ��ѧ���ύ����AC�ˣ���ȥ��ʱ��a��ͬʱ�����������ύ��b�Σ���˶��������������ݣ����������Ӹߵ���Ӧ���������ģ� Josephus 5 376 John 4 284 Alice 4 352 Smith 3 167 Bob 2 325 Bush 0 0
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

//1199: ����ʽ��ӣ���ʵ����
//һ������ʽ���Ա��Ϊx�ĸ�������ϵ���˻��ĺͣ����磺2x6+3x5+12x3+6x+20���ڣ���ĳ���Ҫ������������ʽ��Ȼ���������������ʽ�ĺͣ�Ҳ���ǰѶ�Ӧ�����ϵ�ϵ�����Ȼ�����������Ҫ����������Ϊ100��

//1200: ƽ��������
//��������ƽ��������ʾһ�����ݵġ��������ơ�ʱ����������г���һ�������������ݣ���ôƽ�������������������Ĵ������þͻ�������Ϊ�������������󣬿ɽ�������������ȥ����ֻ�������µ����ݵ�ƽ�������������õĽ����ȫ�����ݵ�ƽ���������ԣ����������������������ĳɼ�ʱ���������������������зֱ�ȥ��һ����߷ֺ�һ����ͷ֣��ټ�������ƽ���ֵİ취���Ա��⼫��������ɵĲ���Ӱ�졣����5���������ܲ����������Ĺ���������������ƽ�����أ�
