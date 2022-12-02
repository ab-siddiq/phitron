#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%s",ch);
    int len=strlen(ch);
    for(int i=0;i<len;i++){
        if((i+1)%2==0 ){
            printf("%c",ch[i]);
            printf("%c",ch[i]);
        }else{
            printf("%c",ch[i]);
        }
    }
}