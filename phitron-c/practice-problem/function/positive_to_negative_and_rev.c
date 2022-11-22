#include <stdio.h>

int positive_to_negative_and_vice_versa(int n);
int main()
{
    int n;
    scanf("%d",&n);
    positive_to_negative_and_vice_versa(n);
}
int positive_to_negative_and_vice_versa(int n)
{
    int k = 0;
    if (n < 0)
    {
        n *= -1;
    }
    else
    {
        k = 1;
    }
    for(int i=n;i >= -n;i--){
        // printf("%d ",i);
        if(k==1){
            printf("%d ",i);
        }else{
             printf("%d ",-i);
        }
    }
}