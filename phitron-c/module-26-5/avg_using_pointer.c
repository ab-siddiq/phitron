#include<stdio.h>
int main(){
    int x,y,*a,*b;
    scanf("%d%d",&x,&y);
    a = &x;
    b = &y;
    double avg=(double)(*a+*b)/2;
    printf("%.3f",avg);


}