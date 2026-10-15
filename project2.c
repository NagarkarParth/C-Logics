#include <stdio.h>

int main()
{
    int book, ch, service, food, a, b, additional, more;
    int rprice = 0, foodprice = 0, addprice = 0;
    int booked = 0;
    float subtotal, sgst, cgst, total;

main:

    printf("\n\n=================================");
    printf("\n       HOTEL ROOM BOOKING");
    printf("\n=================================");

    printf("\nWhich Type Of Room Would You Like To Book ?");

    printf("\n1. Single Room Non AC");
    printf("\n2. Single Room AC");
    printf("\n3. Double Room");
    printf("\n4. Deluxe Room");
    printf("\n5. Dormitory");

    printf("\nEnter Your Choice - ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("\n\nYou Have Selected : Single Room Non AC");
            printf("\nCharges : Rs. 1200 Per Day");

            printf("\nFacilities Include -");
            printf("\nSingle Bed");
            printf("\nHot Water");
            printf("\nWifi");

            printf("\n\nDo You Want To Book ?");
            printf("\n1. Book Room");
            printf("\n2. View Other Room Options");

            printf("\nEnter Your Choice - ");
            scanf("%d", &book);

            if(book == 1)
            {
                printf("\nRoom Booked Successfully!");
                rprice = 1200;
                booked = 1;
            }
            else
            {
                goto main;
            }
            break;

        case 2:
            printf("\n\nYou Have Selected : Single Room AC");
            printf("\nCharges : Rs. 1500 Per Day");

            printf("\nFacilities Include -");
            printf("\nSingle Bed");
            printf("\nHot Water");
            printf("\nWifi");
            printf("\nAC");

            printf("\n\nDo You Want To Book ?");
            printf("\n1. Book Room");
            printf("\n2. View Other Room Options");

            printf("\nEnter Your Choice - ");
            scanf("%d", &book);

            if(book == 1)
            {
                printf("\nRoom Booked Successfully!");
                rprice = 1500;
                booked = 1;
            }
            else
            {
                goto main;
            }
            break;

        case 3:
            printf("\n\nYou Have Selected : Double Room");
            printf("\nCharges : Rs. 2000 Per Day");

            printf("\nFacilities Include -");
            printf("\nDouble Bed");
            printf("\nHot Water");
            printf("\nWifi");

            printf("\n\nDo You Want To Book ?");
            printf("\n1. Book Room");
            printf("\n2. View Other Room Options");

            printf("\nEnter Your Choice - ");
            scanf("%d", &book);

            if(book == 1)
            {
                printf("\nRoom Booked Successfully!");
                rprice = 2000;
                booked = 1;
            }
            else
            {
                goto main;
            }
            break;

        case 4:
            printf("\n\nYou Have Selected : Deluxe Room");
            printf("\nCharges : Rs. 2500 Per Day");

            printf("\nFacilities Include -");
            printf("\nKing Size Bed");
            printf("\nHot Water");
            printf("\nWifi");
            printf("\nAC");
            printf("\nMini Refrigerator");
            printf("\nTV");

            printf("\n\nDo You Want To Book ?");
            printf("\n1. Book Room");
            printf("\n2. View Other Room Options");

            printf("\nEnter Your Choice - ");
            scanf("%d", &book);

            if(book == 1)
            {
                printf("\nRoom Booked Successfully!");
                rprice = 2500;
                booked = 1;
            }
            else
            {
                goto main;
            }
            break;

        case 5:
            printf("\n\nYou Have Selected : Dormitory");
            printf("\nCharges : Rs. 600 Per Day");

            printf("\nFacilities Include -");
            printf("\nSingle Bed");
            printf("\nWifi");

            printf("\n\nDo You Want To Book ?");
            printf("\n1. Book Room");
            printf("\n2. View Other Room Options");

            printf("\nEnter Your Choice - ");
            scanf("%d", &book);

            if(book == 1)
            {
                printf("\nRoom Booked Successfully!");
                rprice = 600;
                booked = 1;
            }
            else
            {
                goto main;
            }
            break;

        default:
            printf("\n\n------------- INVALID OPTION ----------------");
            goto main;
    }


    if(booked == 1)
    {
        more = 1;

        while(more == 1)
        {
            printf("\n\n=================================");
            printf("\n       ADDITIONAL SERVICES");
            printf("\n=================================");

            printf("\n1. Food");
            printf("\n2. Additional Services");

            printf("\nEnter Your Choice - ");
            scanf("%d", &service);


            switch(service)
            {
                case 1:

                    do
                    {
                        printf("\n\n========== FOOD MENU ==========");

                        printf("\n1. Breakfast - Rs. 150");
                        printf("\n2. Lunch     - Rs. 250");
                        printf("\n3. Dinner    - Rs. 250");

                        printf("\nEnter Your Choice - ");
                        scanf("%d", &food);

                        switch(food)
                        {
                            case 1:
                                printf("\nBreakfast Added");
                                foodprice = foodprice + 150;
                                break;

                            case 2:
                                printf("\nLunch Added");
                                foodprice = foodprice + 250;
                                break;

                            case 3:
                                printf("\nDinner Added");
                                foodprice = foodprice + 250;
                                break;

                            default:
                                printf("\nInvalid Food Option");
                        }

                        printf("\nDO YOU WANT TO ADD MORE FOOD ?");
                        printf("\nPress 1 for Yes, 2 for No - ");
                        scanf("%d", &a);

                    } while(a == 1);

                    break;


                case 2:

                    printf("\n\n===== ADDITIONAL SERVICES =====");

                    do
                    {
                        printf("\n1. Laundry       - Rs. 200");
                        printf("\n2. Room Cleaning - Rs. 100");
                        printf("\n3. Extra Bed     - Rs. 500");

                        printf("\nEnter Your Choice - ");
                        scanf("%d", &additional);

                        switch(additional)
                        {
                            case 1:
                                printf("\nLaundry Added");
                                addprice = addprice + 200;
                                break;

                            case 2:
                                printf("\nRoom Cleaning Added");
                                addprice = addprice + 100;
                                break;

                            case 3:
                                printf("\nExtra Bed Added");
                                addprice = addprice + 500;
                                break;

                            default:
                                printf("\nInvalid Additional Service");
                        }

                        printf("\nDO YOU WANT TO ADD MORE ADDITIONAL SERVICES ?");
                        printf("\nPress 1 for Yes, 2 for No - ");
                        scanf("%d", &b);

                    } while(b == 1);

                    break;


                default:
                    printf("\nInvalid Service Option");
            }


            printf("\n\nDO YOU WANT TO ADD MORE SERVICES ?");
            printf("\nPress 1 for Yes, 2 for No - ");
            scanf("%d", &more);
        }


        subtotal = rprice + foodprice + addprice;

        sgst = subtotal * 2.5 / 100;
        cgst = subtotal * 2.5 / 100;

        total = subtotal + sgst + cgst;


        printf("\n\n");
        printf("========================================");
        printf("\n              HOTEL BILL");
        printf("\n========================================");

        printf("\nRoom Charges              : Rs. %d", rprice);
        printf("\nFood Charges              : Rs. %d", foodprice);
        printf("\nAdditional Services       : Rs. %d", addprice);

        printf("\n----------------------------------------");

        printf("\nSubtotal                  : Rs. %.2f", subtotal);

        printf("\nSGST @ 2.5%%               : Rs. %.2f", sgst);
        printf("\nCGST @ 2.5%%               : Rs. %.2f", cgst);

        printf("\n----------------------------------------");

        printf("\nGRAND TOTAL               : Rs. %.2f", total);

        printf("\n========================================");
        printf("\n          THANK YOU!");
        printf("\n========================================");
    }

    return 0;
}
