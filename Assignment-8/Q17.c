//Q17
/*
*********
 *******
  *****
   ***
    *
*/


#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter a num:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            if(j==i || j==2*n-2-i || i==0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

