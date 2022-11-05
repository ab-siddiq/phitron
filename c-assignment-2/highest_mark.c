#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, highestMark;
    scanf("%d", &N);
    int Marks[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Marks[i]);
    }
    highestMark = Marks[0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (highestMark < Marks[j])
            {
                highestMark = Marks[j];
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", highestMark - Marks[i]);
    }

    return 0;
}