//  Write a program to print all Prime numbers between two given numbers

#include <stdio.h>

int main()
{
    int i,n;
    int x,y;
    printf("Enter Starting num:");
    scanf("%d",&x);
    printf("Enter Ending num:");
    scanf("%d",&y);

    for(n=x;n<=y;n++)
    {
        for(i=2;i< n ;i++)
        {
            if(n%i==0)
            {
                break;
            }

        }
        if(n==i)
            printf(" %d ",n);
    }

    return 0;
}
