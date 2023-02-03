//  Write a program to check whether two given numbers are co-prime numbers or not

#include <stdio.h>

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
    if(hcf==1)
        printf("%d and %d are co prime",x,y);
    else
        printf("%d and %d are not co prime",x,y);

}
