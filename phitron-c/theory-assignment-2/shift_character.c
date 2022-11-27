#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char c[50];
    scanf("%s",c);
    scanf("%d",&n);
    // printf("%d",'z');
    for(int i=0;i<strlen(c);i++){
        if(c[i]+n>122){
            printf("%c",c[i]+n-122+96);
        }else{
            printf("%c",c[i]+n);
        }
    }
}