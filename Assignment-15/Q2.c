/*Q2
Write a function to find the smallest number from the given array of any size. (TSRS)
*/
#include <stdio.h>

int Small(int a[],int n)
{
    int i;
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int Small=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]<Small)
            Small=a[i];
    }

    return Small;
}

int main() {

    int n;
    printf("Enter the Size of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Smallest value is %d",Small(arr,n));

    return 0;
}
