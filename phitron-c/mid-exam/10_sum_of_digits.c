#include<stdio.h>
int main(){
    int n,last;
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        last = n%10;
        sum += last;
        n = n/10;
    }
    printf("%d",sum);
}