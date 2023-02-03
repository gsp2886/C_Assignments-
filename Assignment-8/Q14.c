//Q14
/*
*
**
* *
*  *
*****

*/

#include <stdio.h>

int main() {

    int n,i,j;
    printf("Enter a num:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0 || j==i || i==n-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
