#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    if(m==3 && n==3){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        printf("Original Matrix:\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d ",arr[i][j]);
            }printf("\n");
        }
        printf("Transpose Matrix:\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d ",arr[j][i]);
            }printf("\n");
        }
    }else{
        printf("Please choose 3x3 matrix!\n");
    }
    
}