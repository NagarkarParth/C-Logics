#include<stdio.h>
void add()
{
    int num1,num2,sum;

    printf("\nEnter Any Two Numbers -");
    scanf("%d%d",&num1,&num2);

    sum=num1+num2;
    printf("\nSum Of The Numbers Is - %d",sum);
}
int main()
{
    add();
    return 0;
}