//  Write a recursive function to print first N terms of Fibonacci series

//  Sir i tried this by myself
//  Is this soln is Valid?

#include <stdio.h>
int fib(int a,int b,int n)
{
    int sum=a+b;
    a=b;
    b=sum;
    if(n>2)
    {
        printf(" %d",sum);
        fib(a,b,n-1);

    }

}
int main() {

    int n;
    scanf("%d",&n);
    int a=0,b=1,sum;
    if(n==0)
    {
        printf("Invalid");
    }
    else if(n==1)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d %d",a,b);
    }

    fib(a,b,n);

}
