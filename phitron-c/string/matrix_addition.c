#include<stdio.h>
int main(){
    int m,n,matrixCount;
    printf("Enter matrix size: ");
    scanf("%d%d",&m,&n);
    // printf("Enterno of matrix: ");
    // scanf("%d",&matrixCount);
    int m1[m][n];
    int m2[m][n];
    int ans[m][n];
       printf("Enter Matrix 1 elements: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("m1[%d,%d] element: ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter Matrix 2 elements: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("m2[%d,%d] element: ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
    //output matrix
    printf("Matrix 1 elements: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d  ",m1[i][j]);
        }
        printf("\n");
    }
     printf("Matrix 2 elements: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             printf("%d  ",m2[i][j]);
        }printf("\n");
    }
    //matrix addition
    printf("Summation of Matrix 2 elements: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             printf("%d  ",m1[i][j]+m2[i][j]);
        }printf("\n");
    }


}