//  Write a program to find next Prime number of a given number

#include <stdio.h>

int main()
{
    int i,n,a;
    printf("Enter a num:");
    scanf("%d",&n);

    for(a=n+1;;a++)
    {
        for(i=2;i < a ;i++)
        {
            if(a%i==0)
            {
                break;
            }
        }
        if(i==a)
        {
            printf("Next Prime num: %d ",a);
                break;
        }

    }
    return 0;
}

