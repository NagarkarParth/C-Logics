#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int i;
    int sum=0;
    for(i=0;i<=4;i++)
    {
        printf("\n %d",arr[i]);

    }
    for(i=4;i>=0;i--)
    {
        printf("\n %d",arr[i]);
    }
    for(i=0;i<=4;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nSum=%d",sum);

}