/*
5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.

*/

#include <stdio.h>

int main() {

    int arr[10],i;

    printf("Enter 10 elements\n");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);

    int small=arr[0];

    for(i=1;i<10;i++)
    {
        if(arr[i]<small)
            small=arr[i];
    }

    printf("Smallest value is %d",small);

    return 0;
}
