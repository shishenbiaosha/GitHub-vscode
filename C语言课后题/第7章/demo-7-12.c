//�е�С����, ����a����Խ��
#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j;
    char a[][100] = { 0 };
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
    }
    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - 1 - j; i++)
        {
            if (strcmp(a[i], a[i + 1]) > 0)
            {
                char temp[100];
                strcpy(temp, a[i]);
                strcpy(a[i], a[i + 1]);
                strcpy(a[i + 1], temp);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s\n", a[i]);
    }
    return 0;
}