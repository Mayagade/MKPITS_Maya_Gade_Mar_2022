#include <stdio.h>
int main()
  {
	int x, y, i, total = 0;
    printf("enter a pair of numbers ");
	printf("enter  first number of the pair: ");
	scanf("%d", &x);
    printf("enter second number of the pair: ");
	scanf("%d", &y);
	
	if (x>y)
	  {
	  	printf("The pair is in descending order!");
	  }
	  else
	  {
	  	printf("The pair is in ascending order!");
	  }
	  printf("\n");
} 
