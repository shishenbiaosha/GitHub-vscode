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
