#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,large=26,c=0;
    scanf("%d",&n);
    getchar();
    char s[n+3];
    scanf("%s",s);
    int len = strlen(s);
    int freq[large+1];
   
    for(int i=0;i<=large;i++){
        freq[i]=0;
    }
    for(int i=0;i<len;i++){
        freq[(s[i]-'a')+1]++;
    }
    for(int i=0;i<=large;i++){
        if(freq[i]==1)
            c++;
    }
    printf("%d",c);
    return 0;
}
