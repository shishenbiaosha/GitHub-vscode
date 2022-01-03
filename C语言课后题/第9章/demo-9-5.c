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
