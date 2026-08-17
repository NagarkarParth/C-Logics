#include<stdio.h>
int main()
{
    int arr[10];int ev[10]; int od[10];
    int i,e,o;
    printf("Enter Numbers -");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    e=0;
    o=0;
    for(i=0;i<10;i++)
    {
    if(arr[i]%2==0)
        {
            ev[e]=arr[i];
            e++;
        }
    }
    for(i=0;i<10;i++)
    {
    if(arr[i]%2!=0)
        {
            od[o]=arr[i];
            o++;
        }
    }
    printf("\nTOTAL EVEN NUMBERS -%d",e);

    printf("\nEVEN NUMBERS -");
    for(i=0;i<e;i++)
    {
        printf("%5d",ev[i]);
    }
    printf("\nTOTAL ODD NUMBERS -%d",o);

    printf("\nODD NUMBERS -");
    for(i=0;i<o;i++)
    {
       printf("%5d",od[i]);
    }
    return 0;
}