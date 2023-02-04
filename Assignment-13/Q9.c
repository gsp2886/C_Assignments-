//  Write a program in C to count the digits of a given number using recursion

#include <stdio.h>

int CountDigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return 1+CountDigits(n/10);
}

int main() {
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    printf("%d digits",CountDigits(num));

    return 0;
}
