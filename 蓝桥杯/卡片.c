#include<stdio.h>
#include<stdbool.h>
int a[10], i;
bool ck(int x)
{
    while(x)
    {
        int temp = x % 10;
        if(--a[temp] < 0)
            return false;
        x /= 10;
    }
    return true;
}
int main()
{
	for(i=0;i<=9;i++)
        a[i] = 2021; 
	for(i=1; ck(i) ;i++)
        ;
    printf("%d", i - 1);
    return 0;
} 
