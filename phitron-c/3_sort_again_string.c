#include<stdio.h>
#include<string.h>
void desendingSort(char ch[]){
    int len=strlen(ch);
    char s;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(ch[i]<ch[j]){
                s=ch[j];
                ch[j]=ch[i];
                ch[i]=s;
            }
        }
    }
    printf("%s",ch);
}
int main(){
    char ch[100];
    scanf("%s",ch);
    desendingSort(ch);
}