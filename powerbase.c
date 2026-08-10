#include<stdio.h>
int main()
{
    int power,base,i=1,ans=1;
    printf("\nEnter Base -");
    scanf("%d",&base);
    printf("\nEnter Power -");
    scanf("%d",&power);

    while(i<=power)
    {
        ans=ans*base;
        i++;
    }
    printf("Answer = %d",ans);

    return 0;
}