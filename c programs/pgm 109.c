#include<stdio.h>
int main()
{
    int a[3],i, r=0, s=0;
    printf("Enter values :\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
    if(a[i]==10)
    {
        r=r+1;
    }
    
    else if(a[i]==20)
    {
        s=s+1;
    }
    }
    
    if(r==2 || s==2)
    {
       printf("True");
    }
    else
    {
        printf("False");
    }
    
}
