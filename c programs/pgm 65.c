#include<stdio.h>

int is_Multiple(int n1, int n2)
{
    return n1 % n2 == 0;
}
int main()
{
    int n1, n2;
   
    printf( "enter the first number " );
    scanf("%d", &n1);
    printf( "enter the second number " );
    scanf("%d", &n2);

    if(is_Multiple(n1, n2))
        printf( "%d is a multiple of %d.\n", n1, n2 );
    else
        printf( "%d is not a multiple of %d.\n", n1, n2 );

    return 0;
}
