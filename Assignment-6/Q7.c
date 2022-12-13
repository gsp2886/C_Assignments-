//  Write a program to count digits in a given number

#include<stdio.h>

int main()
{
    int x,cnt=0;
    printf("Enter a number\n");
    scanf("%d",&x);


    while(x)
    {
        cnt++;
        x=x/10;

    }
    printf("%d digits\n",cnt);

}
