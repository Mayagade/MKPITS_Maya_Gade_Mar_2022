#include<stdio.h>
int main()
{
    int arr1[3], arr2[3], arr3[3], i;
    
    printf("Enter 3 values in 1st array:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter 3 values in 2nd array:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",& arr2[i]);
    }
    for(i=0;i<3;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
    }
    printf("sum of two array:\n");
    for(i=0;i<3;i++)
    {
        printf("%d\n",arr3[i]);
    }
    
}
