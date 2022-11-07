#include<stdio.h>
int main(){
    int row,column;
    printf("No of row: ");
    scanf("%d",&row);
    printf("No of column: ");
    scanf("%d",&column);
    if(row==column){
        printf("You choose a square matrix!\n");
    }else{
        printf("You choose a non square matrix!\n");
    }
    int a[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Element of matrix a(%d,%d): ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements of matrix a(i,j): \n\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n\n");
    }
}