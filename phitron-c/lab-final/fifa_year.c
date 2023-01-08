#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    if(n%4==0 && (n%400==0||n%100!=0 )){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
