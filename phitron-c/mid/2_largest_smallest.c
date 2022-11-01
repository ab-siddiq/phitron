#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    // Largest
    if (a > b && a > c && a > d)
    {
        printf("Largest = %d\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("Largest = %d\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("Largest = %d\n", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("Largest = %d\n", d);
    }
    // Smallest
    if (b < a && b < c && b < d)
    {
        printf("Smallest = %d", b);
    }
    else if (a < b && a < c && a < d)
    {
        printf("Smallest = %d", a);
    }
    else if (d < a && d < b && d < c)
    {
        printf("Smallest = %d", d);
    }
    else if (c < a && c < b && c < d)
    {
        printf("Smallest = %d", c);
    }
}