#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N,K,C=0;
    scanf("%d%d",&N,&K);
    int Run[N];
    for(int i=0;i<N;i++){
        scanf("%d",&Run[i]);
    }
    for(int i=0;i<N;i++){
        if(Run[i]<K){
            C++;
        }
    }
    printf("%d",C);
    return 0;
}
