//  Q11
/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter a num:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        char cnt='A';
        for(j=0;j<=n+i-1;j++)
        {
            if(j>=n-i-1)
            {
                if(j<n-1)
                {
                    printf("%c",cnt);
                    cnt++;
                }
                else
                {
                    printf("%c",cnt);
                    cnt--;
                }

            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
