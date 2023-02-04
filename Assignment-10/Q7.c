//  Write a function to calculate the number of combinations one can make from n items
//  and r selected at a time. (TSRS)
//   nCr = n! / r! * (n - r)!

int com(int z)
{
    int i=1,fact=1;
    for(i=1;i<=z;i++)
        fact=fact*i;

    return fact;
}

int main()
{
    int n,r,combi;
    printf("To Find the Combinations\n");
    printf("Enter a n:");
    scanf("%d",&n);
    printf("Enter a r:");
    scanf("%d",&r);

    combi= com(n) / (com(r)*com(n-r));


    printf("Combinations  is %d",combi);

    return 0;
}
