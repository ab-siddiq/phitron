#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        printf("%d", i);
    }
    printf("\n");
    for (int i = 2; i <= n; i++)
    {
       
            printf("%d", i);
      
        if(i !=n){
            for (int j = 3; j <= n; j++)
        {
            if (j != n)
            {
                printf(" ");
            }
            else
            {
                printf(" %d", n);
            }
        }
        printf("\n");
    }
        }

    for (int i = 1; i < n; i++)
    {
        printf("%d", n);
    }
    return 0;
}
