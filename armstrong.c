#include<stdio.h>
int main()
{
    int n,sum,i,cnt=0;
    int temp,r,result;

    printf("Enter Number ");
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        cnt++;
        n=n/10;
    }
    n=temp;
    sum=0;
    while(n!=0)
    {
        r=n%10;
        i=1;
        result=1;
        while(i<=cnt)
        {
            result=result*r;
            i++;
        }
        sum=sum+result;
        n=n/10;
    }
   if(sum==temp)
   {
    printf("\n It is a amrstrong number ");
   }
   else
   {
        printf("\n It is not a amrstrong number ");

   }
    return 0;
}