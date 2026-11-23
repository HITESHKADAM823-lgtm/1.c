#include <stdio.h>
int main()
{
    int balance = 5000, choice, amount;

    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Balance = %d", balance);
            break;

        case 2:
            printf("Enter amount: ");
            scanf("%d", &amount);
            balance += amount;
            printf("New Balance = %d", balance);
            break;

        case 3:
            printf("Enter amount: ");
            scanf("%d", &amount);

            if(amount <= balance && amount > 0)
            {
                balance -= amount;
                printf("New Balance = %d", balance);
            }
            else
                printf("Insufficient Balance or Invalid Amount");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}