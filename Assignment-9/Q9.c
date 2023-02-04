//  Q9
//  Program to Convert even number into its upper nearest odd number Switch
//  Statement.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1:
                printf("Nearest odd num is %d",n+1);
                break;
        case 0:
                printf("Odd num is %d",n);

    }

    return 0;
}
