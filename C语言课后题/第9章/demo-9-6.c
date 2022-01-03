#include<stdio.h>
struct xingxing
{
	int x,y;
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
