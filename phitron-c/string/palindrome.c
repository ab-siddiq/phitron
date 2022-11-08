#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char strReverse[100];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    int i,j,result=0;
    for( i=len-1, j=0;i >=0;i--,j++){
        strReverse[j] = str[i];
       
    }
    strReverse[j]='\0';
    // printf("%c",strReverse[1]);
     for(int i=0;i<len-1;i++){
        // printf("%c=%c\n", str[i],strReverse[i+1]);
        if(str[i]==strReverse[i+1]){
            result=1;
        }else{
            result=0;
            // break;
        }
     }
     if(result==1){
        printf("YES");
     }else{
        printf("NO");
     }
    //  puts(str);
}