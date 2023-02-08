/*
6. Write a function in C to read n number of values in an array and display it in reverse
order
*/

#include <stdio.h>

void reverse(int arr[],int size)
{
    int i;
    printf("In Reverse Order\n");
    for(i=size-1;i>=0;i--)
        printf("%d ",arr[i]);

}

int main() {

    int n,i;
    printf("Enter the Size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array values\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    reverse(arr,n);

    return 0;
}
