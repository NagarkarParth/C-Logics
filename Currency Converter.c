#include<stdio.h>
int main()
{
    int ch1,ch2,c;
    float input,result;
    converter :
    printf("\n------------CURRENCY----------------");
    printf("\n1.RUPEE \n2.DOLLAR \n3.EURO");
    printf("\n Choose CURRENCY -- ");
    scanf("%d",&ch1);
     
    switch (ch1)
    {
        case 1:
        rupee :
        printf("\nEnter Your Amount In Rupees -");
        scanf("%f",&input);
        printf("\nChoose Currency To Convert !");
        printf("\n1.RUPEE \n2.DOLLAR \n3.EURO");
        scanf("%d",&ch2);
        
        switch (ch2)
        {
            case 1:
            result=input;
            printf("Rupee = %f",result);
            break;
            
            case 2:
            result=input/96;
            printf("Dollar = %f",result);
            break;
            
            case 3:
            result=input/109;
            printf("Euro = %f",result);
            break;
            
            default:
            printf("\nINVALID CHOICE !");
            
        }
        printf("\n DO YOU WANT TO CONTINUE - press 1 ");
        scanf("%d",&c);
        if (c==1)
        {
            goto rupee ;
        }
        printf("\n--------------------Rupee Converter----------------");
        break;
        case 2:
        dollar :
        printf("\nEnter Your Amount In Dollar -");
        scanf("%f",&input);
        printf("\nChoose Currency To Convert !");
        printf("\n1.RUPEE \n2.DOLLAR \n3.EURO");
        scanf("%d",&ch2);
        
        switch (ch2)
        {
            case 1:
            result=input*96;
            printf("Rupee = %f",result);
            break;
            
            case 2:
            result=input;
            printf("Dollar = %f",result);
            break;
            
            case 3:
            result=input*0.88;
            printf("Euro = %f",result);
            break;
            
            default:
            printf("\nINVALID CHOICE !");
        }
        printf("\n DO YOU WANT TO CONTINUE - press 1 ");
        scanf("%d",&c);
        if (c==1)
        {
            goto dollar ;
        }
        printf("\n--------------------Dollar Converter----------------");
        break;
    
        case 3 :
        euro :
        printf("\nEnter Your Amount In Euro -");
        scanf("%f",&input);
        printf("\nChoose Currency To Convert !");
        printf("\n1.RUPEE \n2.DOLLAR \n3.EURO");
        scanf("%d",&ch2);
        
        switch (ch2)
        {
            case 1:
            result=input*109;
            printf("Rupee = %f",result);
            break;
            
            case 2:
            result=input*1.14;
            printf("Dollar = %f",result);
            break;
            
            case 3:
            result=input;
            printf("Euro = %f",result);
            break;
            
            default:
            printf("\nINVALID CHOICE !");
        }
        printf("\n DO YOU WANT TO CONTINUE - press 1 ");
        scanf("%d",&c);
        if (c==1)
        {
            goto euro ;
        }
        printf("\n--------------------Euro Converter----------------");
        break;
    }
    printf("\nDo You Want To Convert Again - press 1");
    scanf("%d",&c);
        if (c==1)
        {
            goto converter ;
        }
    
    return 0;
}