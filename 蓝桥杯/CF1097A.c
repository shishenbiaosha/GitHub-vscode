#include<stdio.h>
int main()
{
    char ch1[3], ch2[3];
    int flag = 0;
    scanf("%s", ch1);
    for (int i = 1; i <= 5; i++)
    {
        scanf("%s", ch2);
        if (ch2[0] == ch1[0] || ch2[1] == ch1[1])
            flag = 1;
    }
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0;
}