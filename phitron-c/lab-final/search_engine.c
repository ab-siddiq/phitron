#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int search(int arr[],int n, int s){
    for(int i=1;i<=n;i++){
        if(arr[i]==s){
            return i;
        }   
    }
    return 0;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        int a[n];
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        int s;
        scanf("%d",&s);
        int r = search(a,n,s);
        if(r)
            printf("Case %d: %d\n",i,r);
        else
            printf("Case %d: Not Found\n",i);
    }
    return 0;
}
