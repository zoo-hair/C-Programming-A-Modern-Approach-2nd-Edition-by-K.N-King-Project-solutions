/* WAP to calculate the remaining balance on a loan
after the first, second and third month payment*/

#include <stdio.h>

int main ()
{
    float loanAmount, ir , mp , firstm , secondm , thirdm ;

    printf("Enter amount of loan (in $): ");
    scanf( "%f", & loanAmount);

    printf("Enter interest rate: ");
    scanf( "%f", & ir);

    printf("Enter monthly payment (in $): ");
    scanf( "%f", & mp);

    firstm  = loanAmount - mp;
    firstm  += ( ( ir / 100) / 12 ) * loanAmount ;

    secondm  = firstm - mp;
    secondm += ( ( ir / 100) / 12 ) * firstm ;

    thirdm  = secondm - mp;
    thirdm += ( ( ir / 100) / 12 ) * secondm ;

    printf ("Balance remaining after first payment: $%.2f\n" , firstm );
    printf ("Balance remaining after second payment: $%.2f\n" , secondm );
    printf ("Balance remaining after third payment: $%.2f\n" , thirdm );

    return 0;
}