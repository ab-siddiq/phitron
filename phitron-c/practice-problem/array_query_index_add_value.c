#include<stdio.h>
int main(){
    int n,q,value,index;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d%d",&index,&value);
        for(int j=0;j<n;j++){
            if(j==index){
                arr[index] += value;
            }

        }

    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}