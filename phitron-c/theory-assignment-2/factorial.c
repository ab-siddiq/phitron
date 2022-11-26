#include<stdio.h>
double factorial(int n){
    double fac=1;
    for(int i=1;i<=n;i++){
        fac *= i;
    }
    return fac;
}
double ratio(double a,double b){
    return factorial(a)/factorial(b);

}
int main(){
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    printf("%.2lf\n",factorial(n));
    printf("%.2lf\n",ratio(a,b));
}