#include<stdio.h>
int main()
{
    int a[3], i ;
    printf("Enter values: ");
    for(i=0;i<3;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]==5 || a[i]==7)
        {
            printf("contains ");
            break;
        }
        else
        {
            printf("Not contains ");
            break;
        }
    }
}
