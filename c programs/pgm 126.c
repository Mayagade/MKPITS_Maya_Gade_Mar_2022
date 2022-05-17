#include<stdio.h>
int main()
{
    int a[6], i;
    printf("Enter values:");
    for(i=0;i<6;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==5 && a[i]==a[i+1] || a[i]==3 && a[i]==a[i+1])
        {
            printf("Present");
            break;
        }
        else if(a[i]==5 && a[i]==a[i+1] && a[i]==3 && a[i]==a[i+1])
        {
            printf("Present");
            break;
        }
        else 
        {
            printf("Not present");
            break;
        }
    }
}
