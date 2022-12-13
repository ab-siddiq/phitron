#include<stdio.h>
int main(){
    FILE* inputFile = fopen("input2.txt","r");
    FILE* outputFile = fopen("output.txt","w");
    if(inputFile==NULL){
        fprintf(outputFile,"Input file not found!\n");
        return;
    }
    int n;
    fscanf(inputFile,"%d",&n);
    fprintf(outputFile,"%d",n);
    fclose(inputFile);
    fclose(outputFile);
}