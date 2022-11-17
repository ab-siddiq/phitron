#include<stdio.h>
int main(){
    int n,sum=0,last=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        last = arr[i]%10;
        sum += last;
    }
    printf("Sum = %d",sum);
}