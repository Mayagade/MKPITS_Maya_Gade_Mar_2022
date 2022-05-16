#include <stdio.h>
#include <conio.h>

int main(void)
{
    printf("%d",num(123, 456));
    printf("\n%d",num(12, 512));
    printf("\n%d",num(7, 87));
    printf("\n%d",num(12, 45));

    }       
  int num(int x, int y)
        {
          return abs(x % 10) == abs(y % 10);
        }

