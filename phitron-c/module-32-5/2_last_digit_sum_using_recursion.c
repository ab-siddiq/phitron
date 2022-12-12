#include<stdio.h>

int lastDigitSum(int arr[],int n){
    if(n<0) return 0;
    int s=lastDigitSum(arr,n-1);
    // printf("%d=>",s);
    return s+(arr[n]%10);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",lastDigitSum(arr,n-1));
}