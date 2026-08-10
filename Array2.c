#include<stdio.h>

int main()
{
    int arr[10];
    int i;
    int evsum=0,odsum=0;
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
            evsum=evsum+arr[i];
            cte++;
        }
        else
        {
            odsum=odsum+arr[i];
            cto++;
        }
    }
    printf("\n=====================================================");
printf("\nCOUNT OF EVEN NUMBERS IS -%d",cte);
printf("\nEven Numbers Sum = %d",evsum);
printf("\nCOUNT OF ODD NUMBERS IS -%d",cto);
printf("\nOdd Numbers Sum = %d",odsum);


    return 0;
}