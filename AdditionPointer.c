#include<stdio.h>

int main() 

{ 
    int n=10,m=20; 
    int sum;
    int *ptr1=&n;
    int *ptr2=&m;
    int *p3;
    p3=&sum;
    *p3=*ptr1+*ptr2;
    printf("Sum = %d",*p3);
    return 0; 

}