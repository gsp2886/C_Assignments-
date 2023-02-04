//  Write a function to print first N odd natural numbers.

int OddNat(int n)
{
    int i=1,k=1;
    printf("first %d odd natural numbers:\n",n);
    while(i<=n)
    {
        printf("%d ",k);
        i++;
        k=k+2;
    }
}

int main()
{
    int num;
    printf("Enter a num:");
    scanf("%d",&num);

    OddNat(num);

    return 0;
}
