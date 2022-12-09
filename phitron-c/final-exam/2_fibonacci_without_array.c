#include<stdio.h>

int main(){
    int n,t1,t2,nextTerm;
    printf("Enter number of term: ");
    scanf("%d",&n);
    t1=0,t2=1,nextTerm=t1+t2;
    printf("%d %d",t1,t2);
    for(int i=0;i<n-2;i++){
        printf(" %d",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
}