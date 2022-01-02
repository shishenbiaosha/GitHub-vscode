#include<stdio.h>
#define N 100
int main()
{
    char word[N] = {0};
    char i;
    gets(word);
    for (i = 0; i < N; i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] += 32;
        }
    }
    puts(word);
    for (i = 0; i < N; i++)
    {
        if(word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] -= 32;
        }
    }
    puts(word);
    return 0;
}