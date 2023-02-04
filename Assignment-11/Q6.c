//  Write a function to print all Prime numbers between two given numbers. (TSRN)

#include <stdio.h>

void AllPrime(int x,int y)
{
    int n,i;
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
}

int main()
{
    int i,n;
    int x,y;
    printf("Enter Starting num:");
    scanf("%d",&x);
    printf("Enter Ending num:");
    scanf("%d",&y);

    AllPrime(x,y);

    return 0;
}
