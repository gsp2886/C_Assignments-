//  Write a function to calculate HCF of two numbers. (TSRS)
//  let 18 24

#include <stdio.h>

int hcf(int x,int y)
{
    int i,hcf,lcm;
    for(i=1;i;i++)
    {
        if(i%x==0 && i%y==0)
            break;
    }
    lcm=i;
    hcf=(x*y)/lcm;

    return hcf;

}

int main()
{
    int x,y;
    printf("Enter 2 number to check LCM of them:\n");
    scanf("%d %d",&x,&y);

    printf("HCF of %d and %d is : %d\n",x,y,hcf(x,y));

}
