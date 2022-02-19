#include<stdio.h>
struct students
{
    char name[20];
    int year;
    int month;
    int day;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct students a[100];
    int min = 0;
    for (int i = 0; i< n ; i++)
    {
        scanf("%s %d %d %d", a[i].name, &a[i].year, &a[i].month, &a[i].day);
        if (a[min].year < a[i].year)
            min = i;
        else if (a[min].year == a[i].year)
        {
            if (a[min].month < a[i].month)
                min = i;
            else if (a[min].month == a[i].month)
                if (a[min].day < a[i].day)
                    min = i;
        }
    }
    printf("%s %d-%02d-%02d", a[min].name, a[min].year, a[min].month, a[min].day);
    return 0;
}