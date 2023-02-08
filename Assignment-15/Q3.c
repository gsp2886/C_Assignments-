/*
3. Write a function to sort an array of any size. (TSRN)
*/

#include <stdio.h>

void sort(int a[],int n)
{
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

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int a[n];

    sort(a,n);


}

