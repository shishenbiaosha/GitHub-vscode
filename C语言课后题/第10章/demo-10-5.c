#include<stdio.h>
#include<string.h>
int greater(char *s1,char *s2)
{
	int len1, len2, i;
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len1 > len2)
		return 1;
	if (len1 < len2)
		return -1;
	else
	{
		for (i = 0; i < len1; i++)
		{
			if (s1[i] > s2[i])
				return 1;
			else if(s1[i] < s2[i])
				return -1;
		}
	}
	return 0;
}
int main()
{
    char str[5][100], ch, s[100];
    int i, n, j, flag;
    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; i++)
    {
        j = 0;
        flag = 0;
        while(scanf("%c", &ch), ch!='\n')
        {
            if (flag == 0 && ch != '0')
            {
                str[i][j] = ch;
                flag = 1;
                j++;
            }
            else if (flag == 1)
            {
                str[i][j] = ch;
                j++;
                }
        }
        str[i][j]='\0';
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (greater(str[j], str[j + 1]) == -1)
            {
                strcpy(s, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], s);
            }
        }
    }
    for (i = 0; i < n; i++)
        puts(str[i]);
    return 0;
}
