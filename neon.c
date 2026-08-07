#include<stdio.h>
int main()
{
    int n,i,r,sq=0;
    int sum=0;
    printf("\nEnter a number -");
    scanf("%d",&n);
    sq=n*n;
    printf("Square = %d",sq);
    while(sq!=0)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    printf("\nSum =%d",sum);
    if(sum==n)
    {
        printf("\nITS A NEON NUMBER");
    }
    else 
    {
        printf("\nITS NOT A NEON NUMBER");
    }
    return 0;
}