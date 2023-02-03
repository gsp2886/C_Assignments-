//  Write a program to calculate HCF of two numbers
//  let 18 24
#include<stdio.h>

int main()
{
    int x,y,i,lcm,hcf;
    printf("Enter 2 number to check LCM of them:\n");
    scanf("%d %d",&x,&y);


    for(i=1;i;i++)
    {
        if(i%x==0 && i%y==0)
            break;
    }
    lcm=i;
    hcf=(x*y)/lcm;
    //printf("LCM of %d and %d is : %d\n",x,y,lcm);
    printf("HCF of %d and %d is : %d\n",x,y,hcf);

}
