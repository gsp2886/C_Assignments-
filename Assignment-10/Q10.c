//  Write a function to print all prime factors of a given number. For example, if the
//  number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>
int factor(int n)
{
    int sum=1,i,j;
    for(i=2 ; i<=n ; i++)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
            sum=sum*i;
        }
        if (sum==n)
            break;
    }
}

int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    factor(num);


    return 0;
}
