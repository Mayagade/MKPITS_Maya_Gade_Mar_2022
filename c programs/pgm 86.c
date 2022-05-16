#include <stdio.h>
#include <conio.h>
int main(void)
{
    printf("%d",num(78, 95));
    printf("\n%d",num(20, 30));
    printf("\n%d",num(21, 25));
    printf("\n%d",num(28, 28));
    }       
  int num(int x, int y)
{
         if (x >= 20 && x <= 30 && y >= 20 && y <= 30)
         {
            if (x >= y)
              {
                  return x;
              }
               else
            {
                  return y;
            }
            }
            else if (x >= 20 && y <= 30)
            {
                return x;
            }
            else if (y >= 20 && y <= 30)
            {
                return y;
            }
            else
            {
                return 0;
            }
 }

