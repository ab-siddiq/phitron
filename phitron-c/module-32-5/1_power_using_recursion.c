#include<stdio.h>
int power(int n,int m){
    if(m==0) return 1;
    int p = power(n,m-1);
    return p*n;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d",power(n,m));
}