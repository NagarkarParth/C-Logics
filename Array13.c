#include<stdio.h>
#define max 20
int main()
{
    int set1[max],set2[max],setunion[max];
    int l1,l2,l3;
    int i,j,k;
    int flag;

    printf("\nHow Many Numbers Do You Want In Set 1 :");
    scanf("%d",&l1);

    printf("\nEnter number in set1 -");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&set1[i]);
    }

    printf("\nHow Many Numbers Do You Want In Set 2 :");
    scanf("%d",&l2);

    printf("\nEnter number in set 2-");
    for(i=0;i<l2;i++)
    {
        scanf("%d",&set2[i]);
    }
    
    for(i=0,k=0;i<l1;i++)
    {
        setunion[k]=set1[i];
        k++;
    }
    for(j=0;j<l2;j++)
    {
        flag=1;
        for(i=0;i<l1;i++)
        {
            if(set2[j]==set1[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            setunion[k]=set2[j];
            k++;
        }
    }
    printf("\nUnion Set = ");
    for(i=0;i<k;i++)
    {
        printf("%5d",setunion[i]);
    }

    return 0;
}