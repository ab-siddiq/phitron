#include<stdio.h>
int main(){
    int n,check=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i-1] != arr[i]){
            check=0;
            break;
        }else{
            check=1;
        }
    }
    if(check==1){
        printf("Yes");
    }else{
        printf("No");
    }

}