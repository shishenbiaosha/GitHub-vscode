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