#include<stdio.h>
struct students
{
	int xh;
	char name[20];
	int a;
	int b;
	int c;
};
int main()
{
	int n, i, k = -1;
	struct students a[100];
	int num;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%s%d%d%d", &a[i].xh, a[i].name, &a[i].a, &a[i].b, &a[i].c);
	}
	scanf("%d", &num);
	for (i = 0; i < n; i++)
	{
		if (a[i].xh == num)
			k = i;
	}
	printf("%d %s %d %d %d", a[k].xh, a[k].name, a[k].a, a[k].b, a[k].c);
	return 0;
}