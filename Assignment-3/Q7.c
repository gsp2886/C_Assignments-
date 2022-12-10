//  Write a program to check whether roots of a given quadratic equation are real &
//  distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
    printf("Quadratic equation is ax^2+bx+c\n");
    printf("Discriminant formula is b^2-4ac\n");

    int a,b,c,dis;

    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);

    dis= b*b - 4*a*c;

    if(dis>0)
        printf("Roots are real");
    else if(dis==0)
        printf("Roots are equal");
    else
        printf("Roots are imaginary");
    return 0;
}
