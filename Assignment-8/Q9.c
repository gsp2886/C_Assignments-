//  Q9
/*
1234321
 12321
  121
   1
*/


#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter a num:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int cnt=1;
        for(j=0;j<2*n-i-1;j++)
        {
            if(j>=i)
            {
                if(j<n-1)
                {
                    printf("%d",cnt);
                    cnt++;
                }
                else
                {
                    printf("%d",cnt);
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

