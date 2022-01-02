#include<stdio.h>
char grade(int n)
{
    char CJ;
    if (n >= 90)
        CJ = 'A';
    else if (n >= 80 && n <= 89)
        CJ = 'B';
    else if (n >= 70 && n <= 79)
        CJ = 'C';
    else if (n >= 60 && n <= 69)
        CJ = 'D';
    else if (n < 60)
        CJ = 'E';
    return CJ;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%c", grade(n));
    return 0;
}