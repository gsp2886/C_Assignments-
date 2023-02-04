//  Write a recursive function to calculate sum of digits of a given number

#include <stdio.h>

int SumOfDigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%10+SumOfDigits(n/10);
}

int main() {
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    printf("%d",SumOfDigits(num));

    return 0;
}
