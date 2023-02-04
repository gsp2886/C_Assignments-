//  Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>

int SumOfsquaresNatural(int n)
{
    if(n>0)
    {
        return n*n+SumOfsquaresNatural(n-1);
    }
}

int main() {
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    printf("%d",SumOfsquaresNatural(num));

    return 0;
}
