#include<stdio.h>

int main()
{
    int arr[10];
    int i;
    int cte=0;
    int cto=0;
    printf("\nEnter Numbers In Array - ");

    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<10; i++)
    {
        if(arr[i] % 2 == 0)
        {
            cte++;
        }
        else
        {
            cto++;
        }
    }
printf("\nCOUNT OF EVEN NUMBERS IS -%d",cte);
printf("\nCOUNT OF ODD NUMBERS IS -%d",cto);

    return 0;
}