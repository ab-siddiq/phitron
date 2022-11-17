#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    if(n>0){
        k = -n;
        for(int i=n;i>=k;i--){
            printf("%d ",i);
        }
    }if(n<0){
        k= -n;
         for(int i=n;i<=k;i++){
            printf("%d ",i);
        }
    }
    
}