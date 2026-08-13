#include<stdio.h>
int main()
{
    int arr[10],i,j,sum=0;
    float avg;
    printf("Enter 10 Salary Amounts - ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        avg=sum/10;
    }
    printf("\nAverage Salary = %.2f",avg);
    printf("\nAbove Average Salary = ");
    for(i=0;i<10;i++)
    {
        if(arr[i]>avg)
        {
            printf("\n%d",arr[i]);
        }
    }
    return 0;
}