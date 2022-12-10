//  Write a program to calculate LCM of two numbers

#include<stdio.h>

int main()
{
    int x,y,i;
    printf("Enter 2 number to check LCM of them:\n");
    scanf("%d %d",&x,&y);


    for(i=1;i;i++)
    {
        if(i%x==0 && i%y==0)
            break;
    }
    printf("LCM of %d and %d is : %d",x,y,i);


}
