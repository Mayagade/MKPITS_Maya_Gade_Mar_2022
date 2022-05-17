#include<stdio.h>
int fun();
int fun()
{
	int small, medium, large;
	printf("Enter three values:\n");
	scanf("%d%d%d", &small, & medium, & large);
	
	if(small-medium==medium-large)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	
	return(small-medium==medium-large);
	
}
int main()
{
	int R;
	R=fun();
	printf(" %d",R);
}
