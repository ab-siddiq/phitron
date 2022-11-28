#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    int arr2[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int a=1,b=0;
    while (a<=n)
    {
        if(arr[a]%2==0){
            b+=1;
            arr2[b]=arr[a];
        }
        a++;
    }
    a=1;
    while (a<=n)
    {
        if(arr[a]%2 !=0){
            b+=1;
            arr2[b]=arr[a];
        }
        a++;
    }
   
    for(int i=1;i<=n;i++){
        printf("%d ",arr2[i]);
    }
    printf("\nThe %dth element in this sequence is %d.",k,arr2[k]);
}
