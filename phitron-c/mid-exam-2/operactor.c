#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[22];
    fgets(s,sizeof(s),stdin);
    int a,b,sum=0,mul=0;
    scanf("%d%d",&a,&b);
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]=='*'){
            mul += a*b;
        }
        if(s[i]=='+'){
            sum += a+b;
        }
        
    }
    printf("%d",mul+sum);
    return 0;
}
