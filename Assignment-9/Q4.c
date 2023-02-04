/*Q4
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit
*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {


    int x,y,z;
    char input;
    printf("Enter 3 sides of a triangle:");
    scanf("%d %d %d",&x,&y,&z);

    printf("Press : \na --> Isoscales\nb --> RightAngled Triangle \nc --> Equilateral Triangle\n");
    printf("\nWhat you wants to check?\n");

    fflush(stdin);    scanf("%c",&input);
    fflush(stdin);


        switch(input)
        {
        case 'a':
            if( (x==y && y!=z) || (y==z && x!=z) || (x==z && y!=z) )
                printf("isosceles triangle");
            else
                printf("No it is not isosceles triangle");
            break;

        case 'b':
            if( (x*x+y*y==z*z) || (y*y+z*z==x*x) || (x*x+z*z==y*y) )
                printf("right angled triangle");
            else
                printf("No it is not a right angled triangle");

            break;
        case 'c':
            if(x==y && y==z)
                printf("Equilateral triangle");
            else
                printf("No it is not a Equilateral triangle");

            break;

        default:
            printf("Exited");
            break;
        }
        char n;
        printf("\n\nYou wants to recheck? \nType 'y' or 'n'\n ");
        scanf("%c",&n);

        if(n=='n')
            return 0;
        else if(n=='y')
            continue;
        else
        {
            printf("Invalid input");
            break;
        }


    }

}


