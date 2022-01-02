#include<stdio.h>
int jz(int n)
{  
    if(n == 0)
        return 0;
    else
    {
        int temp;
        temp = n % 8;
        n = n / 8;
        jz(n);
        printf("%d", temp);
    }    
}
int main() 
{
    int n;
    scanf("%d", &n);
    jz(n);
    return 0;
}