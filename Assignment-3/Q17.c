//  Write a program which takes the length of the sides of a triangle as an input. Display
//  whether the triangle is valid or not.

#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter 3 sides of a triangle:");
    scanf("%d %d %d",&x,&y,&z);

    if((x+y)>z)
        printf("Triamgle is valid.");
    else if((y+z)>x)
        printf("Triamgle is valid.");
    else if((x+z)>y)
        printf("Triamgle is valid.");
    else
        printf("Triamgle is not valid.");

}
