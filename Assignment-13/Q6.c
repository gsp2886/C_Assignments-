//   Write a recursive function to calculate factorial of a given number

#include <stdio.h>

int fact(int n)
{
    if(n==0)
        return 1;

    return n*fact(n-1);
}

int main() {

    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    printf("%d",fact(num));

    return 0;
}
