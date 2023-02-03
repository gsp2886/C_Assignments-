#include <stdio.h>

int main() {

    int n,i,j;
    printf("Enter a num:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=1;j<=6*n-1;j++)
        {
            if( (j>=n-i && j<=2*n+i) || (j>=4*n-i && j<=5*n+i) )
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    for(i=0;i<=3*n-1;i++)
    {
        for(j=0;j<=6*n-i-2;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
