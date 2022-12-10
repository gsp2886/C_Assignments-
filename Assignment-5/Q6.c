// Print first 10 even natural number

#include<stdio.h>
int main()
{
    int x,i=1,j=2;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("First %d even natural number\n",x);

    while(i<=x)
    {
        printf("%d\n",j);
        j+=2;
        i++;
    }
}
