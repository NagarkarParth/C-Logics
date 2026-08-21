#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *p=&arr[0];
    int i;
    printf("\n====================Using PrintF========================");
    printf("\n%u ---> %d",(p+0),*(p+0));
    printf("\n%u ---> %d",(p+1),*(p+1));
    printf("\n%u ---> %d",(p+2),*(p+2));
    printf("\n%u ---> %d",(p+3),*(p+3));
    printf("\n%u ---> %d",(p+4),*(p+4));
    printf("\n----------------------------------------------------------");
    printf("\n===================Using ForLoop==========================");

    for(i=0;i<5;i++)
    {
        printf("\n%u ---> %d",(p+i),*(p+i));
    }
    printf("\n----------------------------------------------------------");
    printf("\n=============Reverse Using ForLoop=======================");
    for(i=4;i>=0;i--)
    {
        printf("\n%u ---> %d",(p+i),*(p+i));
    }
    return 0;
}