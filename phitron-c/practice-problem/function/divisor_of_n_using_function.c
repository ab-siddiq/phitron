#include <stdio.h>
void divisior_of_n(int n)
{
    for (int i=1;i <= n;i++)
    {
        if(n%i==0){
            printf("%d ",i);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    divisior_of_n(n);
}