//  Print square of first 10 natural number

#include<stdio.h>
int main()
{
    int x,i=1;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("square of first %d natural number\n",x);

    while(i<=x)
    {
        printf("%d\n",i*i);
        i++;
    }
}
