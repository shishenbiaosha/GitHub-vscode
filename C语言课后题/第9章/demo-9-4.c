#include<stdio.h>
#include<math.h>
struct Distance
{
	int x;
	int y;
}; 
int main()
{
	int i, j, n;
	scanf("%d", &n);
	struct Distance a[n];
	struct Distance temp;
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &a[i].x, &a[i].y);
	} 
	for (i = 0; i < n; i++)
    {
	    for (j = i + 1; j < n; j++)
	    {
		    if (a[i].x == a[j].x)
		    {
			    if (a[i].y > a[j].y)
			    {
				    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;	
			    }	
		    }
		    else
		    {
			    if (a[i].x > a[j].x)
			    {
				    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }	
		}	
	} 
	for (i = 0; i < n; i++)
		printf("(%d , %d) ", a[i].x, a[i].y);
	printf("\n");
	for (i = n - 1; i >= 0; i--)
		printf("(%d , %d) ", a[i].x, a[i].y); 
	printf("\n");
	return 0; 
}