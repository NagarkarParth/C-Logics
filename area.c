#include<stdio.h>
int main()
{
    int l,b,h,ch,ct;
    float r,area;
do{
    printf("\n1-Area Of Circle \n2-Area Of Triangle \n3-Area Of Square \n4-Area Of Rectangle ");
    printf("\nEnter Your Choice -");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("\nEnter Radius Of Circle  : ");
        scanf("%f",&r);
        area=3.14*r*r;
        printf("Area  = %.2f",area);
        break;
    case 2:
        printf("\nEnter Base and Height : ");
        scanf("%d%d",&b,&h);
        area=(b*h)/2;
        printf("Area  = %.2f",area);
        break;
    case 3:
        printf("\nEnter Side : ");
        scanf("%d",&b);
        area=b*b;
        printf("Area  = %.2f",area);
        break;
    case 4:
        printf("\nEnter Length And Width  : ");
        scanf("%d%d",&l,&b);
        area=l*b;
        printf("Area  = %.2f",area);
        break;

    default:
        printf("\n****************INVALID CHOICE******************");
        break;
    }
    printf("\nDO YOU WANT TO CONTINUE -----  IF YES PRESS (1) - ");
    scanf("%d",&ct);
}while (ct==1);
printf("\n-------------------------------------END----------------------------------------------");
}