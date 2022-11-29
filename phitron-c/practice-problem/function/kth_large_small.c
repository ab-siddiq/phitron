#include<stdio.h>

void kth_largest_and_smallest(int arr[],int n, int k){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }

    }
   
        printf("%dth largest element = %d\n",k,arr[n-k]);
        printf("%dth smallest element = %d\n",k,arr[k-1]);
    
}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    kth_largest_and_smallest(arr,n,k);
}