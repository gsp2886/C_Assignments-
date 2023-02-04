//  Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>

void natural(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        natural(n-1);
    }
}

int main() {

    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    natural(num);

    return 0;
}
