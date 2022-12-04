#include<stdio.h>
int sumLastDgitIsZero(int n){
    if(n%10==0){
        return n;
    }else{
        return 0;
    }
}
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += sumLastDgitIsZero(arr[i]);
    }
    printf("%d",sum);
}