#include<stdio.h>
int main()
{
    char str1[100] = {0}, str2[100] = { 0 };
    int i, sum = 0;
    gets(str1);
    gets(str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] >= '0' && str1[i] <= '9')
        {
            sum += str1[i] - 48;
        } 
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        if(str2[i] >= '0' && str2[i] <= '9')
        {
            sum += str2[i] - 48;
        }
    }
    printf("%d", sum);
    return 0;
}