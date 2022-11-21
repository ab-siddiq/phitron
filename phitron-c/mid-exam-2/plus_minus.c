#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int n,cBig=0,pBig=0;
   scanf("%d",&n);
   getchar();
   char s[n];
   scanf("%s",s);
   int len = strlen(s);
   for(int i=0;i<len;i++){
    if(s[i-1]==s[i]){
        cBig +=1;
    }else{
        if(pBig<cBig){
            pBig = cBig;
            cBig=1;
        }else{

        cBig=1;
        }
    }
   }
   if(cBig>pBig){
    printf("%d",cBig);
   }else{
    printf("%d",pBig);
   }
    return 0;
}
