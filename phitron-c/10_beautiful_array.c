#include<stdio.h>
int findBeautifulNumber(int n,int *arr){
    int c=0,num,dig;
   
    for(int i=0;i<n;i++){
        while (arr[i] !=0)
        {
            if(arr[i]==7){
                c+=1;
                break;
            }
            dig=arr[i]%10;
                arr[i] /= 10;
                if(dig==7 || arr[i]==7){
                    c+=1;
                    break;
                }
        }
        
    }
    if(c>=n/2){
        printf("Beautiful\n");
    }else{
        printf("Ugly\n");
    }


}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findBeautifulNumber(n,arr);
}