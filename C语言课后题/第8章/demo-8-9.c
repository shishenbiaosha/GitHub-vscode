#include<stdio.h>
void delchar(char s[], char c)
{
    int i, j;
    for (i = 0; s[i] != '\0'; i++)
    {
        if(c == s[i])
        {
            for (j = i; s[j] != '0'; j++)
            {
                s[j] = s[j + 1];
            }
        }
    }
}
int main()
{
    char ch, str[100] = { 0 };
    scanf("%s ", &ch);
    gets(str);
    delchar(str, ch);
    puts(str);
    return 0;
}