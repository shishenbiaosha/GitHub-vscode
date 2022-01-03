#include<stdio.h>
int main()
{
    char str[80] = { 0 };
    int i, num = 0;
    gets(str);
    for (i = 0; str[i] != '\n' ;i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
            num++;
    }
    printf("%d", num);
    return 0;
}