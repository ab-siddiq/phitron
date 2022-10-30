#include<stdio.h>
int main(){
    int n,lastDigit,sum=0;
    scanf("%d",&n);
    while (n>0)
    {
        lastDigit = n%10;
        sum += lastDigit;
        n = n/10;
    }
    printf("%d",sum);
    
}