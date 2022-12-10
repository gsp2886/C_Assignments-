// Print iNeuron 5 times

#include<stdio.h>
int main()
{
    int x,i=1;
    printf("How many times you wants to print iNeuron?\n");
    scanf("%d",&x);

    while(i<=x)
    {
        printf("iNeuron\n");
        i++;
    }
}
