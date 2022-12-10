//  Write a program which takes the month number as an input and display number of
//  days in that month.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year num from 1-12:");
    scanf("%d",&x);

    //  1-31 , 2-28/29 , 3-31 , 4-30 , 5-31 , 6-30 , 7-31 , 8-31 , 9-30 , 10-31 , 11-30 , 12-31

    if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12 )
        printf("Month has 31 days");
    else if(x==4 || x==6 || x==9 || x==11)
        printf("Month has 30 days");
    else if(x==2)
    {
        int y;
        printf("Enter a choice:\n1-->leap year 0-->not leap year:");
        scanf("%d",&y);
        if(y==1)
            printf("Month has 29 days");
        else
            printf("Month has 28 days");
    }


}
