
#include <stdio.h>

int main()
{
    int amount;
    int pin;
    int balance = 10000;

    printf("Enter Your PIN: ");

    if (scanf("%d", &pin) == 1)
    {
        if (pin == 1234)
        {
            printf("Enter Withdrawal Amount: ");

            if (scanf("%d", &amount) == 1)
            {
                if (amount > 0)
                {
                    if (amount <= balance)
                    {
                        printf("Withdrawal Successful!\n");
                    }
                    else
                    {
                        printf("Your Current Balance is %d Rs.\n", balance);
                        printf("Please Enter an Amount Less Than or Equal to %d Rs.\n", balance);
                    }
                }
                else
                {
                    printf("Invalid Withdrawal Amount!\n");
                }
            }
            else
            {
                printf("Invalid Input! Please Enter a Valid Amount.\n");
            }
        }
        else
        {
            printf("Incorrect PIN! Please Check Your PIN.\n");
        }
    }
    else
    {
        printf("Invalid Input! Please Enter a Numeric PIN.\n");
    }

    return 0;
}
