/*Q4
Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

*/

void rotateRight(int a[],int size,int dis)
{
    int i,j,temp;

    for(int j=0;j<dis;j++)
    {
        temp=a[0];
        for(i=0;i<size;i++)
        {
            a[i]=a[i+1];
        }
        a[size-1] = temp;
    }

    printf("After Rotating Left %d times\n",dis);
    for( i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

}

void rotateLeft(int a[],int size,int dis)
{
    int i,j,temp;

    for(int j=0;j<dis;j++)
    {
        temp=a[size-1];
        for(i=size-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0] = temp;
    }

    printf("After Rotating Left %d times\n",dis);
    for( i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

}
int main()
{
    int n,d;
    printf("Enter n:");
    scanf("%d",&n);

    printf("\nFor rotating left press '1' \nFor rotating right press '2'\n");
    printf("press:");
    scanf("%d",&d);

    int a[]={32, 29, 40, 12, 70} ;

    if(d==1)
        rotateLeft(a,5,n);
    else if(d==2)
        rotateRight(a,5,n);
    else
        printf("Invlaid");


}
