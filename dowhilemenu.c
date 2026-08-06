#include<stdio.h>
int main()
{
    int a,b,add,sub,mul;
    int ch,ct;
    float div;
do{
    printf("\n1-ADD \n2-SUB \n3-MUl \n4-DIV");
    printf("\n Enter Your Choice :");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("\nEnter Two Numbers To Perform Addition : ");
        scanf("%d%d",&a,&b);
        add=a+b;
        printf("Addition = %d",add);
        break;
    
    case 2:
        printf("\nEnter Two Numbers To Perform Substraction : ");
        scanf("%d%d",&a,&b);
        sub=a-b;
        printf("Substraction = %d",sub);
        break;
    
     case 3:
        printf("\nEnter Two Numbers To Perform Multiplication : ");
        scanf("%d%d",&a,&b);
        mul=a*b;
        printf("Multiplication = %d",mul);
        break;
    
    case 4:
        printf("\nEnter Two Numbers To Perform Division : ");
        scanf("%d%d",&a,&b);
        div=a/b;
        printf("Division = %d",div);
        break;

    default:
        printf("\n****************INVALID CHOICE******************");
        break;
    }
    printf("\nDO YOU WANT TO CONTINUE -----  IF YES PRESS (1) - ");
    scanf("%d",&ct);
}while (ct==1);
printf("\n-------------------------------------END----------------------------------------------")
    return 0;
}