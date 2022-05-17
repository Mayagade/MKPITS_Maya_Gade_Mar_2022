#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10], i, f=0;
	printf("Enter value :");
	for(i=0;i<5;i++)
	{
	    scanf("%d", &a[i]);
	}
	for(i=0;i<5;i++)
	{
	    if(a[i]%2==0 && a[i+1]%2==0 || a[i]%2!=0 && a[i+1]%2!=0 )
	    {
	        f=1;
	    }
	}
	    if(f==1)
	    {
	        printf("True");
	    }
	    else
	    {
	        printf("False");
	    }
	
	
}
