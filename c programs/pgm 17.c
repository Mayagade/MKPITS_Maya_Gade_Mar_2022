#include <stdio.h>
int main() {
	int sec, a, b, c;
	printf("Input seconds: ");
	scanf("%d", &sec);
	
	a = (sec/3600); 
	
	b = (sec -(3600*a))/60;
	
	c = (sec -(3600*a)-(b*60));
	
	printf("A:B:C - %d:%d:%d\n",a,b,c);
	
	return 0;
}
