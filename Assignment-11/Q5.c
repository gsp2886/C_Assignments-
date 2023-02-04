//  Write a function to print first N prime numbers (TSRN)

int PrimeNum(int n)
{
    int i,a;
    int cnt=1;
    for(a=1;cnt<=n;a++)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                break;
            }
        }
        if(i==a)
        {
            printf("%d ",a);
            cnt++;
        }
    }
}

int main()
{
    int n;
    printf("Enter a num to print Prime Num's:");
    scanf("%d",&n);

    PrimeNum(n);

    return 0;
}
