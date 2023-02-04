//  Write a function to print PASCAL Triangle. (TSRN)
//  formula = combi= com(n) / (com(r)*com(n-r));

#include<stdio.h>

int fact(int a)
{
    int facto=1;

    for(int i=1;i<=a;i++)
    {
        facto*=i;
    }
    return facto;
}

void pascal(int num)
{
    int n,r;
    for(n=0;n<num;n++)
    {
        for(r=0;r<=n;r++)
        {
            printf(" %d ", fact(n) / ( fact(r) * fact(n-r) ));
        }
        printf("\n");
    }
}
int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    printf("-----Pascal Triangle-----\n");
    pascal(num);

    return 0;
}
