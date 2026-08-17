/*
10 20 30 40 50
50 10 20 30 40
40 50 10 20 30
30 40 50 10 20
20 30 40 50 10
10 20 30 40 50 
*/
#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int i,j;
    for(i=4;i>=0;i--)
    {
        for(j=i;j<5;j++)
        {
            printf("%d ",arr[j]);
        }
        for(j=0;j<i;j++)
        {
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
    return 0;
}
