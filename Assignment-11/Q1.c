//  Write a function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>

int lcm(int x,int y)
{
    int i;
    for(i=1;i;i++)
    {
        if(i%x==0 && i%y==0)
            break;
    }
    return i;

}

int main()
{
    int x,y;
    printf("Enter 2 number to check LCM of them:\n");
    scanf("%d %d",&x,&y);


    printf("LCM of %d and %d is : %d",x,y,lcm(x,y));


}
