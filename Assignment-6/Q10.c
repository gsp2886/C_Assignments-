//  Write a program to reverse a given number

#include<stdio.h>

int main()
{

    int x,rem,rev=0;
    printf("Enter a number\n");
    scanf("%d",&x);

/*
    while(x)
    {
        rem=x%10;
        printf("%d",rem);
        x/=10;
    }
*/
    while(x)
    {
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    printf("Reverse of a givern no. : %d",rev);
}
