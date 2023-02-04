//  Write a program in C to calculate the power of any number using recursion

#include <stdio.h>

int power(int x,int y)
{
    if(y==0)
        return 1;
    return x*power(x,y-1);
}

int main() {

    int x,y;
    printf("Enter 2 num:");
    scanf("%d %d",&x,&y);

    printf("%d",power(x,y));

    return 0;
}
