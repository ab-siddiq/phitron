#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(k>0){
        for(int i=k;i<n;i++){
            printf("%d ",arr[i]);
        }
        for(int i=0;i<k;i++){
            printf("%d ",arr[i]);
        }
    }else{
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}