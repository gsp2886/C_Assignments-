//  Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>

int SumOfEvenNatural(int n)
{
    if(n>0)
    {
        return 2*n+SumOfEvenNatural(n-1);
    }
}

int main() {
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    printf("%d",SumOfEvenNatural(num));

    return 0;
}
