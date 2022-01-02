#include<stdio.h>
void grade(int n)
{
    if (n >= 90)
        printf("A");
    else if (n >= 80 && n <= 89)
        printf("B");
    else if (n >= 70 && n <= 79)
        printf("C");
    else if (n >= 60 && n <= 69)
        printf("D");
    else if (n < 60)
        printf("E");
}
int main()
{
    int n;
    scanf("%d", &n);
    grade(n);
    return 0;
}