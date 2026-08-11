#include<stdio.h>
int main()
{
    int arr[10],i,n,flag=0;
    printf("Enter 10 Numbers - ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter A Number To Find From The Array - ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            flag=1;
            printf("Number Found At %d",i+1);
        }
    }
    if(flag==0)
    {
        printf("Number Not Found !");
    }
    return 0;
}