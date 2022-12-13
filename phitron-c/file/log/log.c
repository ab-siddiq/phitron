#include<stdio.h>
int main(){
    FILE* logFile;
    logFile = fopen("log.txt","a");
    fprintf(logFile,"at 2:00 AM\n");
    return 0;
}