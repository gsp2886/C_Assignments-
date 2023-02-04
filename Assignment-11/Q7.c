//  Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>

int Fibo(int n)
{
    int x=0,y=1,z;
    if(n==1)
        printf("%d ",x);
    else if(n==2)
        printf("%d %d ",x,y);
    else
        printf("%d %d ",x,y);

    for(int i=1;i<=n-2;i++)
    {
        z=x+y;
        x=y;
        y=z;
        printf("%d ",z);
    }

}


int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);

    Fibo(n);

    return 0;
}
