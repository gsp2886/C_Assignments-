//  Write a program to check whether a given number is there in the Fibonacci series or not.
// 0 1 1 2 3 5 8 ..... n

int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);

    int x=0,y=1,z;
    if(n==0)
        printf("%d is their in Fibonnaci series ",n);
    else if(n==1)
        printf("%d is their in Fibonnaci series",n);
    else
        {
            for(int i=1;i<=n;i++)
            {
                z=x+y;
                x=y;
                y=z;
                if(z==n)
                {
                    printf("%d is their in Fibonnaci series\n",n);
                    break;
                }

            }
            if(z!=n)
                printf("%d is NOT their in Fibonnaci series\n",n);

        }
    return 0;
}
