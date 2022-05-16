#include <stdio.h>
#include <conio.h>
int main(void)
{
    printf("%d",num(78, 95));
    printf("\n%d",num(95, 95));
    printf("\n%d",num(99, 70));
    }       
   int num(int x, int y)
        {
            int n = 100;
            int num = abs(x - n);
            int num2 = abs(y - n);
            return num == num2 ? 0 : (num < num2 ? x : y);
        }

