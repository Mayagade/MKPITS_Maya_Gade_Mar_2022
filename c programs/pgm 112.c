#include<stdio.h>
int main()
{
    int a[6], b[2], i;
    printf("Enter values:\n");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    b[0]=a[2];
    b[1]=a[3];
    
    int j;
    for(j=0;j<2;j++){
    printf("b[%d]=%d\n", j, b[j]);
    }
}
