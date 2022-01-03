#include<stdio.h>
void swap(int *pa, int* pb)
{
    int t;
    t = *pa;
    *pa = *pb;
    *pb = t;
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a > b)
        swap(&a, &b);
    if(a > c)
        swap(&a, &c);
    if(b > c)
        swap(&b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}