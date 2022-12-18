#include<stdio.h>
int main(){
    FILE * inputFile = fopen("input.txt","r");
    FILE* outputFile = fopen("output.txt","w");
    if(inputFile==NULL){
        printf("No related file found!");
        fprintf(outputFile,"No related file found!");
        return;
    }
    while (1)
    {
        char ch = fgetc(inputFile);
        if(ch==EOF) return;
        fputc(ch,outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
}