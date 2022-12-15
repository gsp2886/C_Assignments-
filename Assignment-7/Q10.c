//  Write a program to print all Armstrong numbers under 1000

//  Expected Output 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407

int main()
{
    int a,i,j,cnt;
    int arm,rem,sum;
    int z,k,mul;

    for(z=1;z<=1000;z++)
    {
        sum=0;
        cnt=0;
        arm=z;
        i=z;

        while(i)
        {
            cnt++;
            i=i/10;
        }

        for(j=1;j<=cnt;j++)
        {
            mul=1;
            rem=arm%10;
            arm=arm/10;
            for(k=1;k<=cnt;k++)
            {
                mul=mul*rem;
            }
            sum=sum+mul;

        }
        if(sum==z)
            printf("%d ",z);
    }

    return 0;
}
