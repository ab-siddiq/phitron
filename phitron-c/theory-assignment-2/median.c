#include<stdio.h>
double median(int arr[],int len);
double sort(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%.2lf",sort(arr,n));
}

double median(int arr[],int len){
    // printf("%d",len/2);
    if(len%2==0){
        return (double)(arr[len/2]+arr[len/2-1])/2;
    }else{
        return arr[len/2];
    }
}
double sort(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
    return median(arr,n);
}
