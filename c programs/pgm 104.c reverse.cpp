#include<stdio.h>
int main()
{
    int a[5], b[5], i;
    printf("Enter 5 values:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
    if(i==4)
    {
        b[0]=a[i];
    }
    else
    {
        b[i+1]=a[i];
    }
    }
    for(i=0;i<5;i++)
    {
        printf("b[%d]=%d\n",i,b[i]);
    }
}
