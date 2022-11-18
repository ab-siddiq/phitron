/*
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
*/
#include<stdio.h>
int main(){
    int n,m=0;
    scanf("%d",&n);
    if(n<0){
        m=1;
        n = n*-1;
    }
    for(int i=n;i>=-n;i--){
        if(m==0){
            printf("%d ",i);
        }
        else{
            printf("%d ",-i);
        }
    }
}
