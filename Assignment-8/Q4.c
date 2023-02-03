//  Q4
/*
* * * * *
  * * * *
    * * *
      * *
        *
*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
//j>=i;
//j>=n-(n-i)
    for(int i=0;i<n;i++)
    {
        for(int j=0 ; j<n ;j++)
        {
            if(j>=n-(n-i))
                printf("* ");
            else
                printf("  ");

        }
        printf("\n");
    }

    return 0;
}
