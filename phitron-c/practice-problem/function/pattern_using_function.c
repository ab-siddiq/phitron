#include<stdio.h>
void print_pattern(int n){
    int k=n;
    for(int i=1;i<n*2;i+=2){
        for(int j=0;j<(i+1)/2;j++){
            printf(" ");
        }
        for(int j=i;j<n*2;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    print_pattern(n);
}