//  Q6
//  Program to check whether a year is a leap year or not. Using switch statement

#include<stdio.h>>

int main()
{
    int year;
    printf("Enter a Year:");
    scanf("%d",&year);
    switch(year %100 == 0)
    {
        case 0 :
                switch(year%4==0)
                {
                    case 0:
                        printf("Not leap year");
                        break;
                    case 1:
                        printf("leap year");
                        break;

                }
                break;
        case 1 :
                switch(year%400==0)
                {
                    case 0:
                        printf("Not leap year");
                        break;
                    case 1:
                        printf("leap year");
                        break;
                }


    }

    return 0;
}
