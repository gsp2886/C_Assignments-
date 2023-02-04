//  Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>

float area(float r);

int main()
{
    float r;
    printf("Enter radius:");
    scanf("%f",&r);

    printf("Area is : %.3f",area(r));

    return 0;
}

float area(float r)
{
    float area;
    area=3.14*r*r;
    return area;
}
