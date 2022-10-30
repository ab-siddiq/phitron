#include<stdio.h>
int main(){
    int a=12,b=13;
    int temp;
    temp =a;
    a = b;
    b=temp;
    printf("%d and %d",a,b);
}