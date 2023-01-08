#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int r = 0;
    int greater = a > b ? a : b;
    for (int i = 1; i <= greater; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            r = i;
        }
    }
    return r;
}

int hexaPair(int a[], int n)
{
    int c = 0, r = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
            {
                r = gcd(a[i], a[j]);
                if (r == 1)
                {
                    c += 1;
                }
            }
        }
    }
    return c;
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[j]);
        }
        printf("%d\n", hexaPair(a, n));
    }
    return 0;
}
