#include<stdio.h>
int main()
{
    char a[100] = { 0 };
    int i;
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if(a[0] >= 'a' && a[0] <= 'z')
            a[0] -= 32;
        else
        {
            if(a[i] >= 'a' && a[i] <= 'z' && a[i - 1] == ' ')
                a[i] -= 32;
        }
    }
    puts(a);
    return 0;
}