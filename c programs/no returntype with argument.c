#include<stdio.h>
#include<conio.h>
void fun(int y1, int y2);
int main()

{
		int x1, x2;
	printf("enter two number\n");
	scanf("%d%d",&x1,&x2);
	fun(x1,x2);
}
// no returntype with argument
void fun(int y1,int y2)
{
	if(y1<y2)
	{
		printf("%d is smaller",y1);
	}
	else
	{
	   printf("%d is smaller",y2);	
	}
}


	


