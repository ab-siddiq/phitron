#include<stdio.h>

int divisible_by_three(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]%3==0){
            c+=1;
        }
    }
    return c;
}
int divisible_by_five(int arr[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]%5==0){
            c+=1;
        }
    }
    return c;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",divisible_by_three(arr,n)+divisible_by_five(arr,n));
}