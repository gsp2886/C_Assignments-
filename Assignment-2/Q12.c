#include <stdio.h>

int main() {
    int a,x;
    printf("Enter a 3 digit number :");
    scanf("%d",&a);

    if(a<100 || a>999)
    {
        printf("Invalid input!");
    }
    else{
        x=a%10;
        x*=100;
        a/=10;

        x=x+a;
        printf("\nRotating last digit to first\n");
        printf("%d",x);
    }


    return 0;
}
