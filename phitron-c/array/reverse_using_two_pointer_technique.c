#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",(a+i));
    }
   
    int temp;
    for(int i=0, j=n-1;i<n/2;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<n;i++){
       printf("%d ",*(a+i));
    }
}