/*
9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.

*/

#include <stdio.h>

int main() {

    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int a[n];
    int i;

    printf("Enter %d Num:\n",n);

    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("In Forward Order\n");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


    printf("\nIn Reverse Order\n");
    for (i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
