#include<stdio.h>

int main() 

{ 
    int n=10,m=20; 
    int sum;
    int *ptr1=&n;
    int *ptr2=&m;

    sum=*ptr1+*ptr2;

    printf("Sum = %d",sum);

    return 0; 

}