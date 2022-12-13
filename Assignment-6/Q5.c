//  Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>

int main()
{
    int x,i=1,cube=0;
    printf("Enter a number\n");
    scanf("%d",&x);


    while(i<=x)
    {
        cube=cube+i*i*i;
        i++;
    }
    printf("cube of first %d natural number is %d\n",x,cube);

}
