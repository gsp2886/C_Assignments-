/*Q9
Write a function in C to merge two arrays of the same size sorted in descending
order
*/

void merge(int x[],int y[])
{
    int c[10];
    int i,j,k=0;

    for(i=0,j=0; i<5 && j<5;k++ )
    {
        if(x[i]< y[j])
        {
            c[k]=x[i];
            i++;
        }
        else
        {
            c[k]=y[j];
            j++;
        }
    }

    if(i==5 && j!=5)
    {
        for(;j<5;j++)
            c[k++]=y[j];
    }
    if(i!=5 && j==5)
    {
        for(;i<5;i++)
            c[k++]=x[i];
    }
    for(i=0;i<10;i++)
        printf("%d ",c[i]);
}

#include <stdio.h>

int main() {
    int x[]={2,4,6,8,10};
    int y[]={1,5,8,10,11};
    merge(x,y);

    return 0;
}
