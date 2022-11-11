#include<stdio.h>
int main(){
    int n=3,m=3,s1=0,s2=0,s3=0,s4=0,result=1;
    int a[m][n];
    int magicNumber = n*(n*n+1)/2;
    // printf("%d\n",magicNumber);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i+j==2){
                s1 += a[i][j];
            }
            if(i==j){
                s2 += a[i][j];
            }
            s3 += a[i][j];
            s4 += a[j][i];
        }printf("\n");
        if(!( s3 == magicNumber && s4 == magicNumber )){
            result =0; 
        }
        // printf("s1=> %d,s2=> %d,s3=> %d, s4 =>%d, re %d\n",s1,s2,s3,s4,result);
         s3=0;
        s4=0;
    }
    if(!(s1 == magicNumber && s2 == magicNumber )){
            result =0; 
        }
   
    if(result==1){
        printf("Yes");
    }else{
        printf("No");
    }

}