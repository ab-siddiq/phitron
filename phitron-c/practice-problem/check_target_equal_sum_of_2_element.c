#include <stdio.h>
int main()
{
    int n, target, result = 0, sum;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 1; j < n; j++)
        {
            sum = arr[i] + arr[j];
            if (sum == target)
            {
                result = 1;
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
    if (result == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}