#include <stdio.h>
int findConsecutiveSum(int num)
{
    for(int i=0;i<num;i++){
        if(i%2==0){
            if(4*i+12==num){
                printf("%d %d %d %d\n",i,i+2,i+4,i+6);
                break;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        findConsecutiveSum(arr[i]);
    }
}
