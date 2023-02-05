/*
10. Write a program in C to copy the elements of one array into another array.Take array
values from the user
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int a[n];
    int i;
    int x[n];

    printf("Enter %d Num:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    for (i=0;i<n;i++)
    {
        x[i]= a[i];
    }
    printf("Printing Array values of X\n");
    for (i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }


    return 0;
}
