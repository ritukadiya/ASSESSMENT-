// write program of food billing system.
#include <stdio.h>
main()
{
    int menu, item, quantity, amount1 = 0, amount2 = 0, amount3 = 0, amount4 = 0, total_amount = 0;
    char choice;
    printf("||-------------------------WELCOM OUR HOTEL-----------------------------||\n");
    printf("\nEnter your choice:--\n");
    printf("[1] item menu for order.\n[2]Exit\n\nchioce is your:  ");
    scanf("%d", &menu);
    
    switch (menu)
    {
    case 1:
    menu:
        printf("||----------------------------WELCOM TO MAIN MENU--------------------------||\n\n");
        printf("\n ITEM 1.= Pizza       price = 180rs/pcs");
        printf("\n ITEM 2.= Burger      price = 100rs/pcs");
        printf("\n ITEM 3.= Dosa        price = 120rs/pcs");
        printf("\n ITEM 4.= Idli        price = 50rs/pcs");
        printf("\n chooze item up to 4......:");
        scanf("%d", &item);
        switch (item)
        {
        case 1:
            printf("\n you have selected Pizza\n");
            printf("Enter the quantity");
            scanf("%d", &quantity);
            amount1 = quantity * 180;
            printf("\n amount = %d.rs", amount1);
            printf("\n total bill =%d.rs\n\n", amount1);
            printf("\n-------------------------------------------------------------------");
            break;
        case 2:
            printf("\n you have selected Burger \n");
            printf("Enter the quntitiy");
            scanf("%d", &quantity);
            amount2 = quantity * 100;
            printf("\n amount = %d.rs", amount2);
            printf("\ntotal bill = %d.rs\n\n", amount2);
            printf("\n-------------------------------------------------------------------");
            break;
        case 3:
            printf("\n you have selected Dosa \n");
            printf("Enter the quntitiy");
            scanf("%d", &quantity);
            amount3 = quantity * 120;
            printf("\n amount = %d.rs", amount3);
            printf("\ntotal bill = %d.rs\n\n", amount3);
            printf("\n-------------------------------------------------------------------");
            break;
        case 4:
            printf("\n you have selected Idli \n");
            printf("Enter the quntitiy");
            scanf("%d", &quantity);
            amount4 = quantity * 50;
            printf("\n amount = %d.rs", amount4);
            printf("\ntotal bill = %d.rs\n\n", amount4);
            printf("\n--------------------------------------------------------------------");
            break;
        default:
            printf("Error.....please select up to 4.\a");
        }
        printf("\n\ndo you want to place more order ?\n(pless 'y'for YES)\n(pless'n'for NO)\n");
        scanf("%s", &choice);
        printf("\n-----------------------------------------------------------------------\n\n");
        
        if (choice == 'y')
        {
            goto menu;
        }
        else if (choice == 'n')
            goto bill;
    case 2:
    bill:
        printf("\n...............................bill..........................\n");
        total_amount = amount1 + amount2 + amount3 + amount4;
        printf("\n total bill =%d.rs\n\n", total_amount);
        printf("\n--------------------------------------------------------------------\n");
        printf("................................THANKS FOR VISITING................................\n");
        printf("\n--------------------------------------------------------------------\n");
        break;
    }
    return 0;
}
