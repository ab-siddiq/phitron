#include<stdio.h>
int swap(int a,int b){
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("Inside swape x= %d, y = %d\n",a,b);
}
int main(){
int x,y;
scanf("%d%d",&x,&y);
printf("Before swapping x=%d, y=%d\n",x,y);
swap(x,y);
printf("After swaping x= %d, y = %d\n",x,y);
}