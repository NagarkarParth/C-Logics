#include<stdio.h>
int main()
{
    int n,rev,r;
    int temp;
    printf("\nEnter Any Number - ");
    scanf("%d",&n);
    temp=n;
    rev=0;

    do{
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }while(n!=0);
    if(rev==temp)
    {
        printf("\nNumber Is A Palindrome ");
    }
    else
    {
        printf("\nNumber Is Not A Palinddrome ");
    }
return 0;
}