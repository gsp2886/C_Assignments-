//Q10
/*
123454321
1234 4321
123   321
12     21
1       1

*/

#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter a num:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        int cnt =1;
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
                    printf("%d",cnt++);
                else if(j<=n-1)
                {
                    printf("%d",cnt);
                    cnt++;
                }
                else if(j>=n+i)
                {
                    printf("%d",--cnt);

                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


