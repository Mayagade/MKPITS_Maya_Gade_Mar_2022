#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5], i, f=0;     // using flag principle
    printf("Enter value :");
	for(i=0;i<5;i++)
	{
	  scanf("%d",&a[i]);
	}
		for(i=0;i<5;i++)
	{
	  if(a[i]==5 && a[i+2]==3 )
	   {
	    f=1;
	   }
	}
	if(f==1)
	  {
	  	printf("true");
	  }
	else
	{
		printf("false");
	}
}

