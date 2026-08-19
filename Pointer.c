#include<stdio.h>

int main() 

{ 
    int n=10; 

    int *ptr=&n; 

    printf("\n\nValue Of N is - %d",n); 

    printf("\n\nAddress Of N is - %u",&n); 

    printf("\n\nValue Using Pointer Variable is : %d",*ptr);

    printf("\n\nAddress Using Pointer Variable is : %u",ptr); 

    return 0; 

}