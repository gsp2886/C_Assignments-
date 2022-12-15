//  Write a program to find the Nth term of the Fibonnaci series.
// 0 1 1 2 3 5 8 ..... n
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);

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
    return 0;
}
