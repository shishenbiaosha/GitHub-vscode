#include<stdio.h>
void Largest(int a[], int n, int *first, int *second)
{
    int i;
    *first = a[0], *second = a[1];
    for (i = 0; i < n; i++)
    {
        if (a[i] >= *first)
        {
            *second = *first;
            *first = a[i];
        }
        else if(a[i] > *second)
            *second = a[i];
    } 
}