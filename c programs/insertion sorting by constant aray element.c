#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,temp; 
int a[5]={12,32,11,18,4};

for(i=1;i<5;i++)
{
	temp=a[i];
	j=i-1;

	while(i>=0 && a[j]>temp)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=temp;
}
   printf("after sorting the array\n");
for(i=0;i<5;i++)
{
	printf("%d\n",a[i]);
}
} 
