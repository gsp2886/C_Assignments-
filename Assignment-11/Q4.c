//  Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>

int nxtPrime(int n)
{
    int i,a;
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
            return i;
        }

    }
}

int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);

    printf("Next Prime num is %d",nxtPrime(n));
    return 0;
}

