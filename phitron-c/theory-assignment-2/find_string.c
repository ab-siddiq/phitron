#include<stdio.h>

int findNumber(char str[],char number){
    int i=0;
    while (str[i] !='\0')
    {
        if(str[i]==number){
            return 1;
        }
        i++;
    }
    return 0;
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int a = findNumber(str,'1');
    int b = findNumber(str,'9');
    int c = findNumber(str,'7');
    if(a==1 && b==1 && c==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}