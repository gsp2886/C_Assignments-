//Q7
/*

**********
****  ****
***    ***
**      **
*        *

*/

#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter a num:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
        {
            if(j<n-i || j>=n+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

