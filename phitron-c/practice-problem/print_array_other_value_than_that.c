#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d - ",i+1);
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }else{
                printf("%d ",arr[j]);
            }
        }printf("\n");
    }
}