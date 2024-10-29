#include <stdio.h>

int main()
{
    int choice;
    float balance = 0.0;
    float amount;

    while (1)
    {
        printf("\n---- Simple Banking System ----\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0)
            {
                balance += amount;
                printf("Deposit successful! New balance: %.2f\n", balance);
            }
            else
            {
                printf("Invalid amount. Please enter a positive number.\n");
            }
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                printf("Withdrawal successful! New balance: %.2f\n", balance);
            }
            else if (amount > balance)
            {
                printf("Insufficient balance.\n");
            }
            else
            {
                printf("Invalid amount. Please enter a positive number.\n");
            }
            break;

        case 3:
            printf("Your current balance is: %.2f\n", balance);
            break;

        case 4:
            printf("Exiting the banking system. Thank you!\n");
            return 0;

        default:
            printf("Invalid choice. Please select a valid option.\n");
        }
    }
    return 0;
}