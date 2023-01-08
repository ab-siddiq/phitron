#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,t1,t2;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( a[i]>a[j] ){
                t1 = a[j];
                a[j]=a[i];
                a[i]=t1;
            } 
            if( b[i]<b[j] ){
                t2 = b[j];
                b[j]=b[i];
                b[i]=t2;
            } 
        }
    }
     for(int j=0;j<n;j++){
          printf("%d ",a[j]-b[j]);
    }
     
    return 0;
}
