#include<stdio.h>
int main()
{
    int arr[5]={5,8,2,4,1};
    int len=5;
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n"); 
    for(i=1;i<len;i++)//i8
    {
        int key=arr[i];//key8
        for(j=i-1;j>=0&&key<arr[j];j--)//j0 8<5x
        {
            arr[j+1]=arr[j];

        }
        arr[j+1]=key;
    }
    for(i=0;i<5;i++)
    {
        printf("%5d",arr[i]);
    }
    return 0;
}