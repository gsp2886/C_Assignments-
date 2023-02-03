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
        printf("%dst term of the Fibonnaci series : %d",n,x);
    else if(n==2)
        printf("%dnd term of the Fibonnaci series : %d",n,y);
    else if(n==0)
        printf("Invalid Input");

    else
        {
            for(int i=1;i<=n-2;i++)
            {
                z=x+y;
                x=y;
                y=z;
            }
            printf("%dth term of the Fibonnaci series : %d ",n,z);
        }
    return 0;
}
