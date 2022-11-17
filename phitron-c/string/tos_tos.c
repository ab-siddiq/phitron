#include<stdio.h>
#include<string.h>
int main(){
    int n,m,t,h;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        getchar();
        char c[m+1];
        fgets(c,sizeof(c),stdin);
        c[strlen(c)]='\0';
        // puts(c);
        t=0,h=0;
        for(int j=0;j<strlen(c);j++){
            
            if(c[j]=='T'){
                t++;
            }
            if(c[j]=='H'){
                h++;
            }
        }
        
        if(t<h){
                printf("England\n");
            }
            if(h<t){
                printf("Pakistan\n");
            }
    }
}
