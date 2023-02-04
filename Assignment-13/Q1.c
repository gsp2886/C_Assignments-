//  Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>

int SumOfNatural(int n)
{
    if(n>0)
    {
        return n+SumOfNatural(n-1);
    }
}

int main() {
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    printf("%d",SumOfNatural(num));

    return 0;
}
