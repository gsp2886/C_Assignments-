//  Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>

int check(int num,int dig)
{
    while(num)
    {
        if(num%10 == dig)
            return 1;
        num=num/10;
    }
    return 0;
}

int main()
{
    int num,digit;
    printf("Enter a num:");
    scanf("%d",&num);

    printf("Enter a Digit:");
    scanf("%d",&digit);


    if(check(num,digit) == 1)
        printf("Yes");
    else
        printf("No");



    return 0;
}
