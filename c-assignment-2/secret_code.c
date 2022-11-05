#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, c = 0, a;
    scanf("%d", &t);
    int n[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < t; i++)
    {
        a = n[i];
        c=0;
        // printf("%d %d ",a,a/2);
        if (a >= 2)
        {
            for (int j = 1; j <= a ; j++)
            {
                if (a % j == 0 && a !=0 && a!=1)
                {
                    // printf("faactor of %d are %d \n",a,j);
                    c++;
                }
            }
        }

        if (c == 2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
