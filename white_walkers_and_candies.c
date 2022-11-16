#include<stdio.h>
int main(){
    int t,n,c,sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&n,&c);
        int a[n];
        sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            sum += a[j]*2;
        }
        if(sum<c){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}
