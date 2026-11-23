#include <stdio.h>

int main()
{
    int choice, qty, price;

    printf("1. Pizza - Rs.150\n");
    printf("2. Burger - Rs.80\n");
    printf("3. Sandwich - Rs.60\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    switch(choice)
    {
        case 1: price = 150; break;
        case 2: price = 80; break;
        case 3: price = 60; break;
        default:
            printf("Invalid Choice");
            return 0;
    }

    if(qty <= 0)
        printf("Invalid Quantity");
    else
        printf("Total Bill = Rs.%d", price * qty);

    return 0;
}