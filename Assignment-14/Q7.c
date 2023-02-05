/*
7. Write a program to find second largest in an array.Take array values from the user

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int a[n];
    int i,temp ;

    printf("Enter %d Num:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max1=a[0] ,max2=a[1];

    if(max1<max2)
    {
        temp =max1;
        max1=max2;
        max2=temp;
    }

    for(i=2;i<n;i++)
    {
        if(max1<a[i])
        {
            //temp = max2;
            max2 =max1;
            max1=a[i];
            //a[i]=temp;
        }
        else if(max2<a[i])
        {
            max2=a[i];
        }
    }

    printf("Second Largest is %d",max2);

    return 0;
}
