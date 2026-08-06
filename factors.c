#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter A Number - ");
    scanf("%d",&n);

    i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            printf("\n %d",i);
        }
        i++;
    }
    printf("\n %d",n);
    return 0;
}