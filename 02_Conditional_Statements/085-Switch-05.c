
#include <stdio.h>

int main()
{
    int choice;
    float balance = 5000.0f, amount;

    printf("===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("Enter Your Choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid Input!\n");
        return 0;
    }

    switch (choice)
    {
    case 1:
        printf("Your Balance = Rs. %.2f\n", balance);
        break;

    case 2:
        printf("Enter Deposit Amount: ");

        if (scanf("%f", &amount) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        if (amount > 0)
        {
            balance = balance + amount;

            printf("Deposited Amount = Rs. %.2f\n", amount);
            printf("Amount Deposited Successfully!\n");
            printf("Updated Balance = Rs. %.2f\n", balance);
        }
        else
        {
            printf("Invalid Deposit Amount!\n");
        }
        break;

    case 3:
        printf("Enter Withdrawal Amount: ");

        if (scanf("%f", &amount) != 1)
        {
            printf("Invalid Input!\n");
            return 0;
        }

        if (amount <= 0)
        {
            printf("Invalid Withdrawal Amount!\n");
        }
        else if (amount <= balance)
        {
            balance = balance - amount;

            printf("Withdrawal Amount = Rs. %.2f\n", amount);
            printf("Withdrawal Successful!\n");
            printf("Remaining Balance = Rs. %.2f\n", balance);
        }
        else
        {
            printf("Insufficient Balance!\n");
            printf("Available Balance = Rs. %.2f\n", balance);
        }
        break;

    case 4:
        printf("Thank You for Using Our ATM!\n");
        break;

    default:
        printf("Invalid Choice! Enter a number between 1 and 4.\n");
    }

    return 0;
}
