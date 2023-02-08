/*
8. Write a function in C to print all unique elements in an array.
*/

#include <stdio.h>

void unique(int a[],int hash[] ,int arrsize,int hashsize)
{
    int i;
    for(i=0;i<arrsize;i++)
    {
        hash[a[i]]++;
    }

    for(i=0;i<hashsize;i++)
    {
        if(hash[i]==1)
            printf("%d ",i);
    }
}


int main() {

    int a[] ={1,2,3,5,2,4,6,8,5,3,6,7};
    int hash[10]={0},i;

    unique(a,hash,12,10);

    return 0;
}
