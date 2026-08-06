#include<stdio.h>
int main()
{
    int i=1,n,fact=1;
    printf("\nEnter A Number To Find Factorial ---");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("\nFactorial Of %d is - %d",n,fact);
    return 0;
}