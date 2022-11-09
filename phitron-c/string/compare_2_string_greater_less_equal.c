#include<stdio.h>
#include<string.h>
int main(){
    char str1[101];
    char str2[101];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int len = strlen(str1)-1;
    for(int i=0;i<len;i++){
      
        if(str1[i]>='A' && str1[i]<='Z'){
            str1[i] +=32;
        }
        if(str2[i]>='A' && str2[i]<='Z'){
            str2[i] +=32;
        }
    }
    // puts(str1);
    // puts(str2);
    for(int i=0;i<len;i++){
        if(str1[i]>str2[i]){
            printf("1");
            return 0;
        } if(str1[i]<str2[i]){
            printf("-1");
            return 0;
        }
            
        
    }
    printf("0");

}