#include <stdio.h>
int main()
{
    int row, column,result=0;
    printf("For diagonal matrix, matrix must be square (row==column): \n");
    printf("No of row: ");
    scanf("%d", &row);
    printf("\nNo of column: ");
    scanf("%d", &column);
    if (row == column)
    {
        printf("\nYou choose a square matrix!\n");
    }
    else
    {
        printf("\nYou choose a non square matrix!\n");
    }
    int a[row][column];
    for (int i = 0; i < row; i++)
    {

        if (row == column)
        {
            for (int j = 0; j < column; j++)
            {
                if (i+j == row-1)
                {
                    printf("\nEnter matrix diagonal element a(%d,%d): ", i, j);
                    scanf("%d", &a[i][j]);
                }else{
                    printf("\nEnter matrix non diagonal element a(%d,%d): ", i, j);
                    scanf("%d", &a[i][j]);
                }
            }
        }
        else
        {
            printf("\nRow is not equal to column! For diagonal matrix row must be equal to column!\nTry again!!!");
            break;
        }
    }
    //print matrix elemets
    if (row == column)
    {
        printf("\nElements of matrix a(i,j): \n\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("%d  ", a[i][j]);
            }
            printf("\n\n");
        }
    }
    //chack matrix identity
    if (row == column)
    {
        
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                
                if (i+j == row-1)
                {
                    if(a[0][0]==a[i][j]){
                        continue;
                    } 
                }
                if(a[i][j] ==0){
                    result = 1;
                }else{
                    break;
                }
            }
        }
        if(result==1){
            printf("Identity matrix!");
        }else{
            printf("Not an identity matrix!");
        }
    }

    
}