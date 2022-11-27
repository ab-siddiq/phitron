#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void winer(int a, int b)
{
    if (a != b)
    {
        if (a > b)
        {
            printf("Argentina\n");
        }
        else if (a < b)
        {
            printf("Brazil\n");
        }
    }
}
void penalty(char a[], char b[])
{
    int agc = 0, bgc = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == '1')
        {
            agc += 1;
        }
        if (b[i] == '1')
        {
            bgc += 1;
        }
    }
    if (agc != bgc)
    {
        winer(agc, bgc);
    }
    if (agc == bgc)
    {
        penaltyInput();
    }
}
void penaltyInput()
{
    char s1[10], s2[10];
    scanf("%s", s1);
    getchar();
    scanf("%s", s2);
    getchar();
    penalty(s1, s2);
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, aw = 0, bw = 0, agc = 0, bgc = 0;

    scanf("%d%d", &a, &b);
    if (a != b)
    {
        winer(a, b);
    }
    if (a == b)
    {
        penaltyInput();
    }
    return 0;
}
