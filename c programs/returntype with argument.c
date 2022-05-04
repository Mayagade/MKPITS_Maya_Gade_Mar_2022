#include<stdio.h>
#include<conio.h>
void fun(int y1, int y2);
int main()

{
		int x1, x2;
	printf("enter two number\n");
	scanf("%d%d",&x1,&x2);
	s=fun(x1,x2);
	if(s==0)
	{
		printf("%d is smaller",x1);
	}
	else
	{
		printf("%d is smaller",x2);
	}
}
//  returntype with argument
int fun(int y1,int y2)
{
	if(y1<y2)
	{
	 return 0;
	}
	else
	{
		return 1;
	}
		
	
}



	


