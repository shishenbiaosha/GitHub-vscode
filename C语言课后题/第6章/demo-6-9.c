#include<stdio.h>
int main()
{
    int a[3][2] = {0}, i, j;
    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 2;j++)
        {
            a[i][j] = i + j;
            printf("%-4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}