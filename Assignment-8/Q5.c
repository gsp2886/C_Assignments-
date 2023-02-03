//  Q5
/*
    *
   ***
  *****
 *******
*********
*/

#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter a num:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<=n+i-1;j++)
        {
            if(j>=n-i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
