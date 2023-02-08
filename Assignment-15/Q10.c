/*
10. Write a function in C to count the frequency of each element of an array.
*/

#include <stdio.h>

void freq(int a[],int size)
{
    int cnt=0,i,j,temp;
    int x=a[0];

    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\nSorted Array:\n");

    for(i=0;i<size;i++)
        printf("%d ",a[i]);

    printf("\n\n");

    for(i=0;i<size;)
    {
        if(x==a[i])
        {
            cnt++;
            i++;
        }
        if(x!=a[i])
        {
            printf("%d-->%d\n",x,cnt);
            x=a[i];
            cnt=0;
        }
    }

}

int main() {
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];

    printf("Enter array values\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    freq(a,n);


    return 0;
}
