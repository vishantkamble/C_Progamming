
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
                    if (amount < balance)
                    {
                        balance = balance - amount;

                        printf("Withdrawal Successful!\n");
                        printf("Your Remaining Balance is %d Rs.\n", balance);
                    }
                    else
                    {
                        printf("Your Balance is %d Rs. and Your Amount is %d Rs.\n",
                               balance, amount);
                        printf("Please Check Your Amount and Try Again!\n");
                    }
                }
                else
                {
                    printf("Please Enter a Valid Amount!\n");
                }
            }
            else
            {
                printf("Invalid Amount Input!\n");
            }
        }
        else
        {
            printf("Incorrect PIN!\n");
        }
    }
    else
    {
        printf("Invalid PIN Input!\n");
    }

    return 0;
}
