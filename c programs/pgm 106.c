#include<stdio.h>
int main()
{
    int a[5],  b[2], i;
    printf("Enter array element:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
   
    b[0]=a[0];
    b[1]=a[4];
    
    int j;
    for(j=0;j<2;j++)
    {
        printf("b[%d]=%d\n",j,b[j]);
    }
}
