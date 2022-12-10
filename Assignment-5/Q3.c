//Print first 10 natural number in reverse order

#include<stdio.h>
int main()
{
    int x,i=1;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("First %d natural number\n",x);

    while(x)
    {
        printf("%d\n",x);
        x--;
    }
}
