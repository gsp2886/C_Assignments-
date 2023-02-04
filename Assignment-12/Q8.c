//  Write a recursive function to print binary of a given decimal number

#include <stdio.h>

void Decimal(int n)
{

    if(n>0)
    {
        Decimal(n/2);
        printf("%d",n%2);
    }

}

int main() {

    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    Decimal(num);
    //printf("%d",Decimal(num));

    return 0;
}

