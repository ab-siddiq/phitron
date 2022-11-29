#include<stdio.h>

int strict_less_or_greater(int arr[],int n,int k){
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]>k || arr[i]<k){
            c+=1;
        }
    }
    return c;
}

int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    printf("%d",strict_less_or_greater(arr,n,k));
}