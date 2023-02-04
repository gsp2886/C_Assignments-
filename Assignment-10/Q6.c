//  Write a function to calculate the factorial of a number. (TSRS)

int fact(int n)
{
    int i=1,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;

    return fact;
}

int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    printf("Factorial of %d is %d",num,fact(num));

    return 0;
}
