#include<stdio.h>
int sum(int n){
    if(n==0) return;
    int s=sum(n-1);
    return s+n;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
}