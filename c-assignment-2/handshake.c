#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int n;
    scanf("%lld",&n);
    if(n>0){
        printf("%lld",n*(n-1)/2);
    }
    return 0;
}