
#include<stdio.h>
#include<conio.h>

int main()
{
   int a[10];
   int i,j,n,temp;
   printf("enter the array number n= \n");
   scanf("%d",&n);

   printf("enter the array\n");
for(i=0;i<n;i++)
{
   printf("a[%d]= ",i);
   scanf("%d",&a[i]);
}
   printf("affter sorting new array are\n");
for(i=0;i<n;i++)
{
  for(j=0;j<n-1;j++)
{

    if(a[j]> a[j+1])
  {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;

  }
}
}

for(i=0;i<n;i++)
{
  printf("a[%d]=%d\n",i,a[i]);
}
getch();
} 
