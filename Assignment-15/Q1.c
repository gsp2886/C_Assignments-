/*Q1
Write a function to find the greatest number from the given array of any size. (TSRS)
*/

#include <stdio.h>

int large(int a[],int n)
{
    int i;
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int large=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>large)
            large=a[i];
    }

    return large;
}

int main() {

    int n;
    printf("Enter the Size of array:");
    scanf("%d",&n);
    int arr[n];



    printf("Greatest value is %d",large(arr,n));

    return 0;
}

