#include<stdio.h>
int main(){
    long long int n,count=0;
    scanf("%d",&n);
    while (n>0)
    {
        n = n/10;
        count++;
    }
    printf("%d digits",count);
    
}