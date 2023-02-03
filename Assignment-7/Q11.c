//  Write a program to find the position of first 1 in LSB.

#include<stdio.h>

int position(int n);

int main()
{
    int a;
    printf("Enter a num:");
    scanf("%d",&a);

    printf("%d",position(a));

    return 0;
}
int position(int n)
{
    int cnt=0;
    while(n)
    {
        if(n&1)
        {
            cnt++;
            break;
        }
        n=n>>1;
        cnt++;
    }
    return cnt;
}
