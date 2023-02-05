/*
4.Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.

*/
#include <stdio.h>

int main() {

    int arr[10],i;

    printf("Enter 10 elements\n");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);

    int large=arr[0];

    for(i=1;i<10;i++)
    {
        if(arr[i]>large)
            large=arr[i];
    }

    printf("Greatest value is %d",large);

    return 0;
}
