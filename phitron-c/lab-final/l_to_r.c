#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void prime(int l, int r){
    for (int i = l; i <= r; i++)
    {
        int c=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                c+=1;
            }
        }
        if(c<=2){
            printf("%d ",i);
        }
    }
    printf("\n");

    
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,l,r;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&l,&r); 
        prime(l,r);
    }
    
    return 0;
}
