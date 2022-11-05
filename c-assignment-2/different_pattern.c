#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){

        for(int j=i;j>0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}