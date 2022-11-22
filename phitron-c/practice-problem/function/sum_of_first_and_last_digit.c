#include <stdio.h>
int find_last_digit(int a)  ;
int find_first_digit(int b)  ;
int sum_of_first_and_last_digit(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d",sum_of_first_and_last_digit(n));
}

int find_last_digit(int a){
    return a %= 10;
}
int find_first_digit(int b) {
    while (b>=10)
    {
        b /= 10;
    }
    return b;
    
}

int sum_of_first_and_last_digit(int n)
{
    int last=0, first=0, sum=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        first=find_first_digit(arr[i]);
        last=find_last_digit(arr[i]);
        sum = sum+first+last;
    }
    return sum;
}