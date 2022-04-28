#include<stdio.h>
int main()
{
    float principal_amt, rate_of_interest, days, interest;
    const int yearInDays = 365;
    
    printf( "enterloan amount (0 to quit): " );
    scanf( "%f", &principal_amt );

    while( (int)principal_amt != 0) 
    {
        printf( "enter interest rate: " );
        scanf( "%f", &rate_of_interest );
        printf( "enter term of the loan in days: " );
        scanf( "%f", &days );

        interest = (principal_amt * rate_of_interest * days )/ yearInDays;
        printf( "The interest amount is $%.2f\n", interest );

        printf( "\n\nInput loan principal_amt (0 to quit): " );
        scanf( "%f", &principal_amt );
    }

    return 0;
}
