#include<stdio.h>
int main()
{
    int a[5], i, sum=0;
    printf("Enter values :");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++)
    {
    if(a[i]==5)
    {
    sum=sum+5;
    }
    }
    printf("sum of all 5's is :%d", sum);
}

