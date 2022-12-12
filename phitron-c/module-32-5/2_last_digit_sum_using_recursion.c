#include<stdio.h>

int lastDigitSum(int arr[],int i,int n){
    if(i==n) return 0;
    int s=lastDigitSum(arr,i+1,n);
    // printf("%d=>",s);
    return s+(arr[i]%10);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",lastDigitSum(arr,0,n));
}