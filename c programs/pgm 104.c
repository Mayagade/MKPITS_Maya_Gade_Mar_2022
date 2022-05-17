#include<stdio.h>
void main()
{
	int a[5];
	int i;
	printf("Enter any 5 number:");
	for(i=0;i<=4;i++)
	{
		
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
