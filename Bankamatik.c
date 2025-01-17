#include <stdio.h>
int main() 
{
    int choice, pin, pin2, balance = 1000, deposit, withdraw;

    printf("Welcome to Your Bank\n");
    printf("Enter your pin: ");
    scanf("%d", &pin);

    
    if(pin == pin2)
    {
        while (choice != 5) 
        {
            printf("1. Check balance\n");
            printf("2. Deposit money\n");
            printf("3. Withdraw money\n");
            printf("4. Change pin\n");
            printf("5. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) 
            {
                case 1:
                    printf("Your current balance is $%d\n", balance);
                    break;
                case 2:
                    printf("Enter the amount you want to deposit: ");
                    scanf("%d", &deposit);
                    balance += deposit;
                    printf("Your current balance is $%d\n", balance);
                    break;
                case 3:
                    printf("Enter the amount you want to withdraw: ");
                    scanf("%d", &withdraw);
                    if (withdraw > balance) {
                        printf("Insufficient funds.\n");
                    } else {
                        balance -= withdraw;
                        printf("Your current balance is $%d\n", balance);
                    }
                    break;
                case 4:
                    printf("Enter your new pin: ");
                    scanf("%d", &pin);
                    printf("Pin changed successfully.\n");
                    break;
                case 5:
                    printf("Thank you for using XYZ Bank. Have a nice day!\n");
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
                    break;
            }
        }
    }
    else
        printf("İncorrect entry");
    
    return 0;
}