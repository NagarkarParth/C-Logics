
/*
    A
    B    B
    C    C    C
    D    D    D    D
    E    E    E    E    E
    D    D    D    D
    C    C    C
    B    B
    A
    */
#include<stdio.h>
int main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%5c",i);
        }
        printf("\n");
    }
    for(i=68;i>=65;i--)
    {
        for(j=65;j<=i;j++)
        {
            printf("%5c",i);
        }
        printf("\n");
    }
}