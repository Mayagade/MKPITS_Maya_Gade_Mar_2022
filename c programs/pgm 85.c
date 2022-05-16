#include <stdio.h>
#include <conio.h>
int main(void)
{
    printf("%d",num(78, 95));
    printf("\n%d",num(25, 35));
    printf("\n%d",num(40, 50));
    printf("\n%d",num(55, 60));
 }   
    
   int num(int x, int y)
        {
               return (x >= 40 && x <= 50 && y >= 40 && y <= 50) ||
			    (x >= 50 && x <= 60 && y >= 50 && y <= 60);

        }

