#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(char* pa[], int n)
{
    int i, j;
    char temp[20] = { 0 };
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (strcmp(pa[j], pa[j + 1]) > 0)
            {
                strcpy(temp, pa[j]);
                strcpy(pa[j], pa[j + 1]);
                strcpy(pa[j + 1], temp);
            }
}
int main()
{
    int i;
    char *str[20];
    for (i = 0; i < 5; i++)
    {
        str[i] = (char*)malloc(sizeof(char) * 20);
        scanf("%s", str);
    }
    fun(str, 5);
    for (i = 0; i < 5; i++)
        printf("%s ", str[i]);
    free(str[i]);
    return 0;
}