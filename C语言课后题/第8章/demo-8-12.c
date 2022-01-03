#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100] = { 0 }, s2[100] = { 0 };
    int i, num = 0, flag;
    gets(s1);
    gets(s2);
    flag = 0;
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == '0')
        {
            num++;
            flag = 1;
        }
        else if(s1[i] != '0')
            break;
    }
    if (flag == 1)
    {
        for (i = 0; s1[i] != '\0'; i++)
            s1[i] = s1[i + num];
    }
   
    flag = 0;
    for (i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] == '0')
        {
            num++;
            flag = 1;
        }
        else if (s2[i] != '0')
            break;
    }
    if (flag == 1)
    {
        for (i = 0; s2[i] != '\0'; i++)
            s2[i] = s2[i + num];
    }

    if (strcmp(s1, s2) == 0)
        printf("0");
    else if (strcmp(s1, s2) > 0)
        printf("1");
    else if (strcmp(s1, s2) < 0)
        printf("-1");
    return 0;
}