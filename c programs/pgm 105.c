#include<stdio.h>
int main()
{
    int a[5], b[5], c[2], i;
    printf("Enter 1st array element:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 2nd array element:\n");
    for(i=0;i<5;i++)
     {
        scanf("%d",&b[i]);
    }
    c[0]=a[2];
    c[1]=b[2];
    
    int j;
    for(j=0;j<2;j++)
    {
        printf("c[%d]=%d\n",j,c[j]);
    }
}
