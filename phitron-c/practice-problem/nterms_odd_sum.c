#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n*2;i++){
    if(i%2 != 0){
        printf("%d ",i);
        sum += i;
    }
    }
    printf("\nSum of all od number: %d",sum);
}