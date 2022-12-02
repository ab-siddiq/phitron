#include<stdio.h>
int swap(int *l,int *r,int *arr){
    int swap;
    swap = arr[*l];
    arr[*l]=arr[*r];
    arr[*r]=swap;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int q,l,r;
    scanf("%d",&q);
    for(int i=1;i<=q;i++){
        scanf("%d%d",&l,&r);
        swap(&l,&r,&arr);

    }
    for(int i=1;i<=n;i++){
        printf("%d ",arr[i]);

    }
}