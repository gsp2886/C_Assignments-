//  Write a recursive function to print octal of a given decimal number

#include <stdio.h>

void octal(int n)
{

    if(n>0)
    {
        octal(n/8);
        printf("%d",n%8);
    }

}

int main() {

    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    octal(num);

    return 0;
}

