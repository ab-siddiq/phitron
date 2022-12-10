#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len = strlen(str), large=26;
    int freq[large+1];
    for(int i=0;i<=large;i++){
        freq[i]=0;

    }
    for(int i=0;i<len;i++){
        freq[(str[i]-'a')+1]++;
    }
    int next=0;
    while (next !=4)
    {
        int max=-1,index=-1;
        char ch;
        for(int i=1;i<=large;i++){
            if(freq[i]>max){
                max=freq[i];
                ch=i+96;
                index=i;
            }
        }
    //    printf("%d\n",max);
    //    printf("%c\n",ch);
       for(int i=1;i<=max;i++){
         printf("%c",ch);
       }
        freq[index]=0;
        next++;
    }
    
    
    
    
}