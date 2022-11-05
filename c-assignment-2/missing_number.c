#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    long long int sum,a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%lld%lld%lld%lld",&sum,&a,&b,&c);
    if(sum ==0 && a>=0 && b>=0 && c>=0){
        printf("%lld\n",sum-(a+b+c)*0);
    }else{
        printf("%lld\n",sum-(a+b+c));
    }
    }
    
    
    return 0;
}