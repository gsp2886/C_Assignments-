//   Write a function to calculate the number of arrangements one can make from n items
//  and r selected at a time. (TSRS)

//  P(n,r) = n!/(n-r)!


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

    combi= com(n) / com(n-r);


    printf("Permutation is %d",combi);

    return 0;
}
