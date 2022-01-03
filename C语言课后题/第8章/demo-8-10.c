#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[100];
    int i, len, point, n, k = 1;
    gets(a);
    len = strlen(a);
    for(i = 0; i < len; i++)
    {
        if(a[i] == '.')
        {
            point = i;
            break;
        }
    }
    if(a[len - 1] != '0')
    {
        printf("0");
        for(i = point; i < len; i++)
            printf("%c",a[i]);
    }
    else
    {
        for(i = len - 1; i > point; i--)
        {
            if(a[i] == '0')
                k++;
            else
                break;
        }
        printf("0");
        for(i = point; i <= len - k; i++)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}