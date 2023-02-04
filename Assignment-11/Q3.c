//  Write a function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>

int isPrime(int x)
{
    int i;
    for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                return 0;
            }
        }
        if(i==x)
            return 1;
}

int main()
{
    int x,i,f=0;
    printf("Enter a number to check prime or not: \n");
    scanf("%d",&x);

    if(x==1)
        printf("1 is not a prime no\n");
    else
    {
        if(isPrime(x) == 1)
            printf("%d is prime\n",x);
        else
            printf("%d is not prime\n",x);

    }

}
