//  Write a recursive function to calculate HCF of two numbers

#include <stdio.h>
int hcf(int a,int b)
{

    if(a==0)
        return b;

    if(b==0)
        return a;

     return hcf(b,a%b);

}
int main() {

    int a,b;
    printf("Enter the two Number:");
    scanf("\n%d %d",&a,&b);

    printf("Hcf : %d",hcf(a,b));
}
