/* WAP to ask the user to enter amount in dollar and cents, then display the amount with 5% tax added*/

#include <stdio.h>
#define tax ( 1.05 )

int main()
{
    float ini_amount;
    printf( "Enter the amount:" );
    scanf( "%f" , &ini_amount );
    printf( "Your final amount after VAT:%.0f\n", ( ini_amount * tax));
}