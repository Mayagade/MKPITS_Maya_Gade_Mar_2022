#include<stdio.h>
int main()
{
    int a[3], i, f=0;
    printf("Enter value: ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]==3 || a[i]==5)
        {
            printf("True");
            break;
        }
        else
        {
            printf("False");
            break;
        }
    }
}


