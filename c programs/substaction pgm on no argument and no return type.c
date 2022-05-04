#include<stdio.h>
#include<conio.h>
void sub();
int main()
{
   sub();
}
void sub()
{
	int num1,num2,res;
	printf("enter num1");
	scanf("%d",&num1);
	printf("enter num2");
	scanf("%d",&num2);
	res=num1-num2;
	printf("res=%d",res);
	
}
