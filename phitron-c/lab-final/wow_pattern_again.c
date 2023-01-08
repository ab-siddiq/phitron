#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=0;k<n-i;k++){
            printf(" ");
        }
        for(int j=1;j<i*2;j++){
            if(i%2==0){
                printf("*");
            }else{
                printf("^");
            }
        }
        printf("\n");
    }
}