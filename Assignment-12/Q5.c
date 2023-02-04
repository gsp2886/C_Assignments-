//  Write a recursive function to print first N even natural numbers

#include <stdio.h>

void natural(int n)
{
    if(n>0)
    {
        natural(n-1);
        printf("%d ",2*n);
    }
}

int main() {

    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    natural(num);

    return 0;
}
