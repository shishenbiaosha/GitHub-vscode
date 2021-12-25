//将输入的四个整数按由大到小的顺序输出
#include<stdio.h>
void swap(int* pa, int* pb)
{
	int t;
	t = *pa;
	*pa = *pb;
	*pb = t;
}
int main()
{
	int a, b, c, d, i;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	for (i = 0; i < 3; i++)
	{
		if (a < b)
		{
			swap(&a, &b);
		}
		if (b < c)
		{
			swap(&b, &c);
		}
		if (c < d)
		{
			swap(&c, &d);
		}
	}
	printf("%d %d %d %d", a, b, c, d);
	return 0;
}

//求n个整数中的最大的两个元素
#include<stdio.h>
void LargestTow(int a[], int n, int* pfirst, int* psecond)
{
	int i, j, t;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	*pfirst = a[0];
	*psecond = a[1];
}
int main()
{
	int n, i, arr[1000];
	int * ps, * pf , first, second;
	pf = &first;
	ps = &second;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	LargestTow(arr, n, pf, ps);
	printf("%d %d", *pf, *ps);
	return 0;
}

//求字符串长度（指针专题）
#include<stdio.h>
int len(char* sp)
{
	int i, l = 0;
	for (i = 0; *(sp + i) != '\0'; i++)
	{
		if (*(sp + i) != ' ')
			l++;
	}
	return l;
}
int main()
{
	char a[100];
	int l;
	gets(a);
	l = len(a);
	printf("%d", l);
	return 0;
}

//实现成绩统计（结构体专题）
#include<stdio.h>
struct Student 
{
	char xh[15];
	char name[25];
	int c;
	int m;
	int e;
};
int main()
{
	int n, i, max = 0;
	scanf("%d", &n);
	struct Student a[100];
	int s[100];
	for (i = 0; i < n; i++)
	{
		scanf("%s%s%d%d%d", a[i].xh, a[i].name, &a[i].c, &a[i].m, &a[i].e);
		s[i] = a[i].c + a[i].m + a[i].e;
		if (s[i] > s[max])
			max = i;
	}
	printf("%s %s %d %d %d\n", a[max].xh, a[max].name, a[max].c, a[max].m, a[max].e);
	return 0;
}

//编写程序求谁的年龄最小（结构体专题）
#include<stdio.h>
struct FRIDEND {
	char Name[20];
	int year, month, day;
};
int main()
{
	struct FRIDEND p, max;
	max.year = 0;
	max.month = 0;
	max.day = 0;
	int n;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%s %d %d %d", p.Name, &p.year, &p.month, &p.day);
		if (p.year == max.year)
		{
			if (p.month == max.month)
			{
				if (p.day > max.day)
					max = p;
			}
			else if (p.month > max.month)
				max = p;
		}
		else if (p.year > max.year)
			max = p;
	}
	printf("%s %04d-%02d-%02d", max.Name, max.year, max.month, max.day);
	return 0;
}

//编写程序时间按出生日期排序（结构体专题）
#include <stdio.h>
struct student
{

    char name[10];
    int year;
    int month;
    int day;
};
int main()
{
    int n;
    struct student temp, p[10];
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", p[i].name);
        scanf("%d", &p[i].year);
        scanf("%d", &p[i].month);
        scanf("%d", &p[i].day);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[i].month > p[j].month)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            else if (p[i].month == p[j].month)
            {
                if (p[i].day > p[j].day)
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
        printf("%s ", p[i].name);
        printf("%d-%02d-%02d\n", p[i].year, p[i].month, p[i].day);
    }
    return 0;
}