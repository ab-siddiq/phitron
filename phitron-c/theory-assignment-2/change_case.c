#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int i=0;
    while (str[i] !='\0')
    {
        if(str[i]>='a' && str[i] <='z'){
            str[i] -= 32;
        }
        else if(str[i]>='A' && str[i] <='Z'){
            str[i] += 32;
        }
        i++;
    }
    puts(str);
    
}