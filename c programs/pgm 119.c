#include<stdio.h>
int main()
{
    int a[5], i, sum=0, count=0;
    printf("Enter values: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]!=17)
        sum=sum+a[i];
    }
    printf("Sum is:%d",sum);
}

