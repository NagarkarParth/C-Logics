#include<stdio.h>
int main() {
	int cnt,ch,sum=0,ord,ct,c;
	float cgst,sgst,finaltot;
Menu :
	printf("\nEnter Your Choice To Order -");
	printf("\n1 - Starter\n 2- Veg Menu\n 3- NonVeg Menu ");
	scanf("%d",&ch);

	if(ch==1)
	{

starter :

		printf("\nStarter 1 - 300");
		printf("\nStarter 2 - 230");
		printf("\nStarter 3 - 350");
		printf("\nEnter Your Choice");
		scanf("%d",&ord);
		if(ord==1)
		{
			sum=sum+300;
			cnt++;
		}
		else if(ord==2)
		{
			sum=sum+230;
			cnt++;
		}
		else if(ord==3)
		{
			sum=sum+350;
			cnt++;
		}
		else
		{
			printf("\nNo Starter");
		}

		printf("\nDo You Want To Order Starter Again - (1/2");
		scanf("%d",&c);
		if(c==1) {
			goto starter;
		}


	}
	else if (ch==2) {
Vegmenu:

		printf("\nVegMenu 1 - 500");
		printf("\nVegMenu 2 - 630");
		printf("\nVegMenu 3 - 750");
		printf("\nEnter Your Choice");
		scanf("%d",&ord);
		if(ord==1) {
			sum=sum+500;
			cnt++;
		}
		else if(ord==2) {
			sum=sum+630;
			cnt++;
		}
		else if(ord==3) {
			sum=sum+750;
			cnt++;
		}
		else {
			printf("No Veg Menu ");
		}

		printf("Do You Want To Order Veg Again - (1/2");
		scanf("%d",&c);
		if(c==1) {
			goto Vegmenu;
		}

	}
	else if (ch ==3) {
NonVeg :
		printf("\nNonVegMenu 1 - 500");
		printf("\nNonVegMenu 2 - 630");
		printf("\nNonVegMenu 3 - 750");
		printf("\nEnter Your Choice");
		scanf("%d",&ord);
		if(ord==1) {
			sum=sum+500;
			cnt++;
		}
		else if(ord==2) {
			sum=sum+630;
			cnt++;
		}
		else if(ord==3) {
			sum=sum+750;
			cnt++;
		}
		else {
			printf("\nNo NonVeg Menu ");
		}

		printf("\nDo You Want To Order NonVeg Again - (1/2");
		scanf("%d",&c);
		if(c==1) {
			goto NonVeg;
		}
	}
	else {

		printf("\nNo Order Found -");
	}
	printf("\nDO YOU WANT TO CONTINUE press (1) -");
	scanf("%d",&ct);
	if(ct==1)
	{
		goto Menu;
	}
	cgst=sum*0.10;
	sgst=sum*0.20;
	finaltot=sum+cgst+sgst;
	        if(cnt>0)
	{
		printf("-----------------------------------------------------------------------");
		printf("\n===========================MENU========================================");
		printf("\nTotal = %d",sum);
		printf("\nCGST =  %f",cgst);
		printf("\nSGST = %f",sgst);
		printf("\nFINAL TOTAL = %f",finaltot);
		printf("\n------------------------------------------------------------------------");
	}
	return 0;

}