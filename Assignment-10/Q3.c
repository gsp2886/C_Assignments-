//  Write a function to check whether a given number is even or odd. Return 1 if the
//  number is even, otherwise return 0. (TSRS)

int EvenOdd(int n)
{
    if(n&1)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    printf("Enter a num to check Even or Odd:");
    scanf("%d",&num);

    if(EvenOdd(num) == 1)
    {
        printf("Odd");
    }
    else{
        printf("Even");
    }

}
