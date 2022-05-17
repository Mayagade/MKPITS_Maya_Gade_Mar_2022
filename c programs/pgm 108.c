#include<stdio.h>
int main()
{
    int a[2],i, n=0;
    printf("Enter values :\n");
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<2;i++)
    {
    if(a[i]==15  || a[i]==20)
    {
        printf("False");
        n=1;
        break;
    }
    }
    if(n==0)
    {
        printf("True");
    }
}
