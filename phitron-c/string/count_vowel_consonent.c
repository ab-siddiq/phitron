#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int v=0,c=0,l=0;
    printf("Small letter:\n");
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str)-1;i++){
        if(str[i]>= 'a' && str[i] <='z'){
            l+=1;
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                v += 1;
            }else{
                c+=1;
            }
        }
    }
        printf("No of letter: %d\n",l);
        printf("No of vowel: %d\n",v);
        printf("No of consonent: %d\n",c);

}