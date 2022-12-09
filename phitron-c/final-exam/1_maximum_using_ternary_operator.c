#include<stdio.h>
int main(){
    int a,b,max=0;
    scanf("%d%d",&a,&b);
    max = a>b ? a:b;
    printf("%d",max);
}