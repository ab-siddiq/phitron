#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, temp = 0, last, next, e1 = 0, e2 = 0, ec = 0, o1 = 0, o2 = 0, oc = 0, esum = 0, osum = 0;
    scanf("%d", &n);
    int arr[n];
    next = n - 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printf("last is: %d\n\n", last);

    if (n > 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    last = arr[next];

    if (n == 1)
    {
        if (arr[0]%2 == 0)
        {
            printf("%d", arr[0]);
        }
        else
        {
            printf("0");
        }
    }
    else
    {

        for (int i = n - 1; i > 0; i--)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                // if last even
                if (last % 2 == 0)
                {
                    // printf("inside last even: e1 %d, e2 %d, o1 %d, o2 %d\n", e1, e2, o1, 02);
                    e1 = last;
                    // printf("%d lst\n");
                    if (ec == 0)
                    {
                        if (arr[j] % 2 == 0)
                        {
                            e2 = arr[j];
                            ec += 1;
                        }
                    }
                    esum = e1 + e2;
                    if (oc < 2)
                    {
                        if (oc == 0)
                        {
                            if (arr[j] % 2 != 0)
                            {
                                o1 = arr[j];
                                oc += 1;
                            }
                        }
                        else
                        {
                            if (arr[j] % 2 != 0)
                            {
                                o2 = arr[j];
                                oc += 1;
                            }
                        }
                    }
                    osum = o1 + o2;
                }
                // if last odd
                if (last % 2 != 0)
                {
                    // printf("inside last odd: e1 %d, e2 %d, o1 %d, o2 %d\n", e1, e2, o1, o2);
                    o1 = last;
                    // printf("%d lsdt\n");
                    if (oc == 0)
                    {
                        if (arr[j] % 2 != 0)
                        {
                            o2 = arr[j];
                            oc += 1;
                        }
                    }
                    osum = o1 + o2;
                    if (ec < 2)
                    {
                        if (ec == 0)
                        {
                            if (arr[j] % 2 == 0)
                            {
                                e1 = arr[j];
                                ec += 1;
                            }
                        }
                        else
                        {
                            if (arr[j] % 2 == 0)
                            {
                                e2 = arr[j];
                                ec += 1;
                            }
                        }
                    }
                    esum = e1 + e2;
                }
            }
        }

        if (osum > esum && osum%2 ==0)
        {
            printf("%d", osum);
        }
        else
        {
            printf("%d", esum);
        }
        // printf("%d",res);
        return 0;
    }
}