/*
1
22
333
4444
55555
4444
333
22
1
*/
#include<stdio.h>

int main()
{
    int i, j;

    // Upper Half
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    // Lower Half
    for(i=4; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}