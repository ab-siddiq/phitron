#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, n, a;
    char c;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%c", &arr[i], &c);
    }
    for (int i = 0; i < n; i++)
    {

        a = arr[i];
        if (a >= 0 && a < 60)
        {
            t = 60 - a + 100;
        }
        else if (a >= 60 && a < 80)
        {
            t = (80 - a) * 2 + 60;
        }
        else if (a >= 80 && a <= 100)
        {
            t = (100 - arr[i]) * 3;
        }
        printf("%d minutes\n", t);
        t = 0;
    }
    return 0;
}