// Q1
//  Write a program which takes the month number as an input and display number of
//  days in that month.

#include<stdio.h>
int main()
{
    int n;

    printf("Choose \n1-January,\n2-February, \n3-March, \n4-April, \n5-May, \n6-June, \n-July, \n8-August, \n9-September, \n10-October, \n11-November, \n12-December\n ");

    printf("\nEnter Your Choice");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid input");

    }

    return 0;
}
