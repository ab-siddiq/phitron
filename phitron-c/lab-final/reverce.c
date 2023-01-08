#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void print(int n){
    int l;
    while (n>0)
    {
        l=n%10;
        n/=10;
        printf("%c",l+64);
    }
    printf("\n");
    
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        print(n);
    }
    return 0;
}
