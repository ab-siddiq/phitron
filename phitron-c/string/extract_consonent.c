#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str)-1;
    for(int i=0;i<len;i++){
        // if(!(str[i] == 'a' || str[i]=='e' || str[i]=='i' || str[i]='o'||str[i]=='u'))
        if(str[i]>='a' && str[i]<='z'){
            if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'))
        {
            printf(".%c",str[i]);
        }
        }
    }
}