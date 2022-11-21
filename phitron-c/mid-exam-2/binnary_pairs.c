#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n,p;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        getchar();
        char s[n+2];
        fgets(s,sizeof(s),stdin);
        int len = strlen(s);
        p=0;
        for(int j=0;j<n;j++){
            if((s[j]=='1' && s[j+1]=='0') || (s[j]=='0' && s[j+1]=='1')){
                p += 1;
            }
        }
        printf("%d\n",p);
    }   
    return 0;
}
