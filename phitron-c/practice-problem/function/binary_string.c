#include<stdio.h>
#include<string.h>

int is_binary_string(char str[],int len){
    int i=0;
    while (str[i] != '\0'){
        if((str[i]>='a' || str[i]>='A') && (str[i]<='z' || str[i]<='Z')){
            return 0;
            break;
        }else{
            return 1;
        }
        i++;

    }
   
    

}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    
    if(is_binary_string(str,len)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}