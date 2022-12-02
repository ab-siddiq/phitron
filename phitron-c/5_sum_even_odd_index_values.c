#include<stdio.h>
int sum_od_even(int arr[],int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if((arr[i]%2 == 0 && i%2 == 0) || (arr[i]%2 != 0 && i%2 != 0)){
            sum = sum+arr[i]+i;
        }
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",sum_od_even(arr,n));
}