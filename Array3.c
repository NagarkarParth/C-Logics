#include<stdio.h>

int main()
{
    int arr[10];
    int i;
    int c1=0,c2=0,c3=0,c4=0;
    printf("\nEnter Numbers In Array - ");

    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<10; i++)
    {
        if(arr[i]%3==0 && arr[i]%5==0)
        {
            c1++;
        }
        else if(arr[i]%3==0)
        {
            c2++;
        }
        else if(arr[i]%5==0)
        {
            c3++;
        }
        else{
            c4++;
        }
    }
    printf("\nNumbers Divided By 3 And 5 are - %d",c1);
    printf("\nNumbers Divided By 3 are - %d",c2);
    printf("\nNumbers Divided  5 are - %d",c3);
    printf("\nNumbers Not Divided By 3 And 5 are - %d",c4);


    return 0;
}