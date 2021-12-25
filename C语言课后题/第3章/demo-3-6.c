#include<stdio.h>
int main()
{
    char ch;
    ch = getchar();
    if (ch >= 'A' && ch <= 'Z')
        printf("%d", ch - 'A' + 1);
    if (ch >= 'a' && ch <= 'z')
        printf("%d", ch - 'a' + 1);
    return 0;
}