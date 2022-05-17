#include<stdio.h>
int main()
{
    int a[6], x=0, y=0, i;
    printf("Enter values :");
    for(i=0;i<6; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<6; i++)
    {
        if(a[i]==3)
        {
            x=x+1;
        }
        else if(a[i]==5)
        {
           y=y+1;
        }
    }
        if(x>y)
        {
        	printf("True");
		}
		else
		{
			printf("False");
		}
    
}
