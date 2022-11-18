#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        getchar();
        char s[n+5];
        fgets(s,sizeof(s),stdin);
        // for(int i=0;i<strlen(s);i++)
        puts(s);
    }  

    for(int i=0;i<strlen;i++){
        printf("%c\n",s[i]);
    }
    
    return 0;
}
