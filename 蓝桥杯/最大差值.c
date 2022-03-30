#include<stdio.h>

int main()
{
    int T;
    int N = 200005;
    int a[N];

    scanf("%d", &T);

    while(T--)
    {
        int n = 0, k = 0;

        scanf("%d%d", &n, &k);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        
        //超时
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    int temp;
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        long long sum = 0;

        for (int i = n - 1; i >= n - k - 1; i--)
        {
            sum += a[i];
        }
        
        printf("%lld\n", sum); 
    }
    return 0;
}