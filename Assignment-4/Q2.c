// Print first 10 natural number

#include<stdio.h>
int main()
{
    int x,i=1;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("First %d natural number\n",x);

    while(i<=x)
    {
        printf("%d\n",i);
        i++;
    }
}
