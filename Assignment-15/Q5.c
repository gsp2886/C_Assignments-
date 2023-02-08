/*Q5
Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.
*/

int AdjDup(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
    if(a[i]!=a[i+1])
        return 0;

}

#include <stdio.h>

int main() {

    int arr[10]={1,2,3,4,4,2,8,6,5,3};
    int x;
    x=AdjDup(arr,10);
    if(x==0)
        printf("No adjacent elements are duplicate");
    else
        printf("%d is duplicated",x);

    return 0;
}
