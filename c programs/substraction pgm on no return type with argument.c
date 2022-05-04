#include<stdio.h>
#include<conio.h>
void fun1();
void sub(int x , int y);
void main()
{
	fun1();
}

void fun1()
{
	int a=5, b=3;
	sub(a,b);
}

void sub(int x, int y)
{
	int r;
	r=x-y;
	printf("%d",r);
	
}
