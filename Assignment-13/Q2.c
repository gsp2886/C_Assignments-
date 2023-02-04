//  Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>

int SumOfOddNatural(int n)
{
    if(n>0)
    {
        return 2*n-1+SumOfOddNatural(n-1);
    }
}

int main() {
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    printf("%d",SumOfOddNatural(num));

    return 0;
}
