#include<stdio.h>
int circleRadius(int r){
    printf("%f",3.1416*(r*r));

}
int main(){
    int r;
    scanf("%d",&r);
    circleRadius(r);
}