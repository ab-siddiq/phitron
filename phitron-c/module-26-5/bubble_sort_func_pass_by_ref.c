#include<stdio.h>
int bubbleSort(int *arr, int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]){
             temp = arr[j];
             arr[j]= arr[i];
             arr[i]=temp;
           }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}