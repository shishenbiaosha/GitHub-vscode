#include<stdio.h>
int main()
{
    char str[80] = { 0 };
    int i, result = 0;
    gets(str);
    for (i = 0; str[i] != '\0' ;i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
        }
    }
    printf("%d", result);
    return 0;
}