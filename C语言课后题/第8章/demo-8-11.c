#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
	int left = 0, right, len = strlen(str), i, j;
	char t;
	if (*str == '-')
		left = 1;
  	for (i = len - 1; i >= 0; i--)
    {
        if(*(str + i) != '0')
        {
            right = i;
            break;
        }
    }   
	for(i = left, j = right; i <= (right + left) / 2; i++, j--)
	{
		t = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = t;
	}
}
int main()
{
	char str[101];
	gets(str);
	reverse(str);
	puts(str);
	return 0;
}