//   Write a program to take marks of 5 subjects from the user. Assume marks are given
//  out of 100 and passing marks is 33. Now display whether the candidate passed the
//  examination or failed.

#include<stdio.h>
int main()
{
    int x1,x2,x3,x4,x5,sum,per;
    printf("Enter marks of 5 subject:");
    scanf("%d %d %d %d %d",&x1,&x2,&x3,&x4,&x5);

    sum=x1+x2+x3+x4+x5;

    per=sum*100/500;

    if(per>33)
        printf("Pass");
    else
        printf("Fail");
}
