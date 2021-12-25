//数列的逆序输出
#include<stdio.h>
int main()
{
	int n, i, arr[10] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = n - 1; i >= 0; i--)
	{
		printf("%4d ", arr[i]);
	}
	return 0;
}

//求数组的最小值
#include<stdio.h>
int main()
{
	int n, i, arr[1000] = { 0 }, min, a = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			a = i;
		}
	}
	printf("%d %d", min, a);
	return 0;
}

//删除元素
#include<stdio.h>
void del(int A[], int n, int i);
void PrintArr(int A[], int n);
int main()
{
	int A[10], i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	scanf("%d", &i);
    del(A, n, i);
	PrintArr(A, n);
	return 0;
}
void del(int A[], int n, int i)
{
	int a;
	for (a = i; a <= n; a++)
	{
		A[a] = A[a + 1];
	}
}
void PrintArr(int A[], int n)
{
	int b;
	for (b = 0; b < n - 1; b++)
	{
		printf("%d ", A[b]);
	}
}

//一维数组排序
#include<stdio.h>
int sort(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
void PrintArr(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int n, i, arr[10];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, n);
	PrintArr(arr, n);
	return 0;
}

//矩阵乘法
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

//求最常用字符
#include<stdio.h>
int main() {
	int i, max = 0, count[130] = { 0 };
	char ch;
	while (scanf("%c", &ch), ch != '\n') 
	{
		int c;
		if (ch >= 'a' && ch <= 'z') 
		{
			c = ch;
			count[c]++;
		}
		else if (ch >= 'A' && ch <= 'Z') 
		{
			c = ch + 32;
			count[c]++;
		}
		if (count[c] > max)
			max = count[c];
	}
	for (i = 65; i < 123; i++) 
	{
		if (count[i] == max) 
		{
			printf("%c\n", i);
			break;
		}
	}
	return 0;
}

//最常用字符
#include<stdio.h>
int main()
{
	int i, max, maxi, a[27] = { 0 };  
	char ch;

	while (scanf("%c", &ch), ch != '\n')
	{
		if (ch >= 'A' && ch <= 'Z') 
			ch = ch + 32;
		a[ch - 96]++;    
	}
	maxi = 0; max = a[0];  
	for (i = 0; i < 27; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxi = i;
		}
	}
	printf("%c\n", maxi + 96);
	return 0;
}

//单词个数统计
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