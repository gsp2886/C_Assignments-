/*
7. Write a program to find second Smallest in an array.Take array values from the user

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
    int small_1=a[0] ,small_2=a[1];

    if(small_1>small_2)
    {
        temp =small_1;
        small_1=small_2;
        small_2=temp;
    }

    for(i=2;i<n;i++)
    {
        if(small_1>a[i])
        {
            small_2 =small_1;
            small_1=a[i];
        }
        else if(small_2>a[i])
        {
            small_2=a[i];
        }
    }

    printf("Second Smallest is %d",small_2);

    return 0;
}
