/*  Q10
    C program to find all roots of a quadratic equation using switch case
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int flag=0;
    float a,b,c,d,r1,r2,real,imag;
    printf("Enter coeffivients of equation:");
    scanf("%f %f %f",&a,&b,&c);

    if(a!=0)
    {
        d=b*b-(4*a*c);

        if(d>0)
        {
            flag=1;
        }
        else if(d<0)
        {
            flag=2;
        }
        else
        {
            flag=3;
        }


        switch(flag)
        {
        case 1:
            printf("The roots are real and distinct\n");
            r1=(-b + sqrt(d)/(2*a) );
            r2=(-b - sqrt(d)/(2*a) );
            printf("R1= %7.3f \nR2 = %7.3f",r1,r2);
            break;

        case 2:
            printf("Roots are complex\n");
            real=b/(2*a);
            imag=sqrt(-d)/(2*a);
            printf("R1 =%7.3f+i%7.3f \nR2 =%7.3f-i%7.3f",real,imag,real,imag);
            break;

        case 3:
            printf("The roots are real and equal\n");
            r1=r2=-b/2*a;
            printf("R1=R2 = %7.3f",r1);
            break;
        }
    }

    else
        printf("Equation is linear");


    return 0;
}
