// Print first 10 odd natural number

#include<stdio.h>
int main()
{
    int x,i=1,j=1;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("First %d odd natural number\n",x);

    while(i<=x)
    {
        printf("%d\n",j);
        j+=2;
        i++;
    }
}
