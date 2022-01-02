#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] = { 0 };
    gets(str);
    strrev(str);
    puts(str);
    return 0;
}