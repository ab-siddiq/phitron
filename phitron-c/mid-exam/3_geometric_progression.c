#include<stdio.h>
int main(){
    int arr[15];
    arr[0]=1;
    for(int i=1;i<=15;i++){
        arr[i] = arr[i-1]*2;
    }
    for(int i=0;i<15;i++){
        printf("%d ",arr[i]);
    }
}