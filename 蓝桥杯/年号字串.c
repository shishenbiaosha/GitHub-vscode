#include<stdio.h>
int main()
{
    int a = 2019, b;
    while (a != 0)
    {
        b = a % 26;
        printf("%c", b + 'A' - 1);
        a /= 26;
    }
    return 0;
}