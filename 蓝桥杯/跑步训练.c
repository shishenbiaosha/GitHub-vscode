#include<stdio.h>
int main()
{
    int tl = 10000, time = 0;
    while (tl > 0)
    {
        if(time % 2 == 0)
            tl -= 600;
        else
            tl += 300;
        time++;
    }
    printf("%d", time * 60 + tl / 10);
}