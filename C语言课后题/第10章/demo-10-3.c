#include<stdio.h>
#include <string.h>
#include<stdlib.h>
void find(char* name[], int n, int* p)
{
    int i, imax = 0;
    char max[10];
    strcpy(max, name[0]);
    for (i = 0; i < n; i++)
    {
        if (strcmp(max, name[i]) < 0)
        {
            strcpy(max, name[i]);
            imax = i;
        }
    }
    *p = imax;
}
int main()
{
    int i = 0, f = 0;
    char *str[20];
    for(i = 0; ;i++)
    {
        str[i] = (char*)malloc(sizeof(char) * 10);
        scanf("%s", str[i]);
        if (strcmp(str[i], "*****") == 0)
            break;
    }
    find(str, i, &f);
    puts(str[f]);
    free(str[i]);
    return 0;
}