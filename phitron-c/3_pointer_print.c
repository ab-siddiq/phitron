#include<stdio.h>
int main(){
    int x,y, *ptrX,*ptrY;
    scanf("%d%d",&x,&y);
    ptrX = &x;
    ptrY = &y;
    printf("%d %d",*ptrX,*ptrY);
}