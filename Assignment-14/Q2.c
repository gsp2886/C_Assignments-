/*
2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.

*/

#include <stdio.h>

int main() {

    float arr[10];
    int i;
    float avg,sum=0;

    printf("Enter 10 elements\n");

    for(i=0;i<10;i++)
        scanf("%f",&arr[i]);

    for(i=0;i<10;i++)
        sum=sum+arr[i];

    avg=sum/10;
    printf("Sum of array is %.2f",avg);

    return 0;
}
