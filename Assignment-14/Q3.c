/*
3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.

*/
#include <stdio.h>

int main() {

    int arr[10];
    int i,even=0,odd=0;

    printf("Enter 10 elements\n");

    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
            even+=arr[i];
        else
            odd+=arr[i];
    }


    printf("Sum of Even is %d\n",even);
    printf("Sum of Odd is %d\n",odd);

    return 0;
}
