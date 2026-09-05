#include<stdio.h>
int main()
{
int arr[5]={10,20,30,40,50};
int key;
printf("Enter key");
scanf("%d",&key);
int start=0;
int end=4;
int mid=(start+end)/2;
while(start<=end)
{
    if(key==arr[mid])
    {
        printf("Key Found at %d ",mid);
        return 0;
    }
    else if (key<arr[mid])
    {
        end=mid-1;
    }
    else if (key>arr[mid])
    {
        start=mid+1;
    }
}
printf("\nKey Not Found ");
return 0;
}