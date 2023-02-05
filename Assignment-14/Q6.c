/*
6. Write a program to sort elements of an array of size 10. Take array values from the
user.

*/

//Array sort ascending order

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int a[n];
    int i,j,temp;

    printf("Enter %d Num:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }

    printf("\nSorted Array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}

