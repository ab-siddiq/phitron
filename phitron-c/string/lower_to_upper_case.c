#include<stdio.h>
int main(){
    char c[100];
    //name, size of name, stdin
    fgets(c,sizeof(c),stdin);
    puts(c);
    int i=0;
    while(c[i] !='\0'){
        if(c[i]>='a' && c[i]<='z'){
            c[i] -= 32;
        }i++;
    }
    puts(c);
}