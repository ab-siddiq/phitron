#include<stdio.h>
int main(){
    FILE *inputFile;
    inputFile = fopen("input2.txt","r");
    if(inputFile==NULL){
        printf("No file found!\n");
        return;
    }
    FILE *outputFile;
    outputFile = fopen("output.txt","w");
    while (1)
    {
        char ch = fgetc(inputFile);
        if(ch==EOF){
            return;
        }
        fputc(ch,outputFile);
    }
    
}