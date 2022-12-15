//  Write a program to check whether a given number is an Armstrong number or not

int main()
{
    int n,arm,cnt=0,i;
    int sum=0,rem;

    printf("Enter a num:");
    scanf("%d",&n);
    i=n;

    arm=n;

    while(i)
    {
        cnt++;
        i=i/10;
    }
//    printf("%d",cnt);

    for(int j=1;j<=cnt;j++)
    {
        int mul=1;
        rem=n%10;
        n=n/10;
        for(int k=1;k<=cnt;k++)
        {
            mul=mul*rem;
        }
        sum=sum+mul;

//      printf("%d\n",sum);
    }
    if(sum==arm)
        printf("%d is a armstrong",arm);
    else
        printf("%d is not a armstrong",arm);

    return 0;
}
