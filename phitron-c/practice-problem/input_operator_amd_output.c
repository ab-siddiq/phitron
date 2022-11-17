#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    int a,b;
    scanf("%d%d",&a,&b);
    if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='/'){
        printf("%d",a/b);
    }
    else if(c=='%'){
        printf("%d",a%b);
    }
}