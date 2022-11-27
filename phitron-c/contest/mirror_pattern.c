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
    
    for(int i=2;i<=n;i++){
        printf("%d",i);
        if(i!=n){
            for(int j=2;j<=n;j++){
                if(j!=n){
                    printf(" ");
                }else{
                    n -= 1;
                    printf("r%d",n);
                }
            }printf("\n");
        }
    }

    for (int i = n-1; i > 0; i--)
    {
        printf("k %d", i);
    }
    return 0;
}
