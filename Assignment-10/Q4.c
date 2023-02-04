//  Write a function to print first N natural numbers (TSRN)

int nat(int n)
{
    int i=1;
    printf("first %d natural numbers:\n",n);
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
}

int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    nat(num);

    return 0;
}
