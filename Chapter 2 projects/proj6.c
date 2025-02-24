/* wap in C that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills */

#include <stdio.h>

int main ()
{
    int amount, twenties, tens, fives, ones;

    printf("Enter U.S dollar amount: ");
    scanf("%d", & amount);

// Calculates the number of $20 bills
    twenties = amount / 20;
    amount = amount % 20;

// calculates the number of $10 bills
    tens = amount / 10;
    amount = amount % 10;

// calculates the number of $5 bills
    fives = amount / 5;
    amount = amount % 5;

// calculates the number of $1 bills
    ones = amount / 1;
    amount = amount % 1;

    printf( "$20 bills: %d\n", twenties);
    printf( "$10 bills: %d\n", tens);
    printf( "$5 bills: %d\n", fives);
    printf( "$1 bills: %d\n", ones);
    return 0;
}