//Q13
/*
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A

*/

#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter a num:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        char cnt ='A';
        for(j=0;j<2*n;j++)
        {
            if(j<n-i || j>=n+i-1)
            {
                if(i==0 && j==n+i)
                {
                    //printf("%d",cnt);
                    --cnt;
                }
                else if( j==4 && i==0)
                    printf("%c",cnt++);
                else if(j<=n-1)
                {
                    printf("%c",cnt);
                    cnt++;
                }
                else if(j>=n+i)
                {
                    printf("%c",--cnt);

                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


