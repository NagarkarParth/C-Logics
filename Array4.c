#include<stdio.h>

int main()
{
    int arr[10];
    int i;
    int num;
    int max,min;
    printf("\nEnter Numbers In Array - ");

    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max=arr[0],min=arr[0];
    for(i=1; i<10; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
    printf("\nmax= %d",max);
    printf("\nmin=%d",min);
return 0;
}
