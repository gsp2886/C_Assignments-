// Print first 10 even natural number in reverse order

#include<stdio.h>
int main()
{
    int x,i=1;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("First %d even natural number in reverse order:\n",x);

    while(x)
    {
        printf("%d\n",2*x);
        x--;

    }
}
