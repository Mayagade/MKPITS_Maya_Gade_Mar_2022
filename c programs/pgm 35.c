#include <stdio.h>
int main()
 {
		
	int x, y, temp, i, sum=0;
    printf("enter the first number "); 
    scanf("%d", &x);
    printf("enter the second number ");
    scanf("%d", &y);	
	if(x > y) 
	{
	
		temp = y;
		y = x;
		x = temp;
	}
	for(i = x; i <= y; i++) 
	{
		if((i % 17) != 0)
		 {
			sum += i;
		}
	}
	
	printf("\nSum\n %d\n", sum);
	
	return 0;
}
