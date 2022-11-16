#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[n];
    char s2[n];
    getchar();
    fgets(s,sizeof(s),stdin);
    puts(s);
    int len = strlen(s);
    // printf("%d",len);
    int i=len-1;
    int j=0;
    for(i=len-1,j=0;i>=0;i--,j++){
        // printf("%c\n",s[i]);
        printf("%d %d",i,j);
        s2[0+j] = s[i];
        // printf("%c\n",s[i]);
    }
    s2[len]='\0';
    puts(s2);
}
