/*Q2
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y;
    int choice;

    while(1)
    {
        printf(" A. Addition\n B. Subtraction \n C. Multiplication \n D. Division \n E. Exit\n ");
        printf("\nEnter Your Choice");

        fflush(stdin);
        scanf("%c",&choice);
        fflush(stdin);

        switch(choice)
        {
            case 'A' :
                printf("Enter x and y:");
                scanf("%d %d",&x,&y);
                printf("Addition:%d\n",x+y);
                break;
            case 'B' :
                printf("Enter x and y:");
                scanf("%d %d",&x,&y);
                printf("Subtraction:%d\n",x-y);
                break;
            case 'C' :
                printf("Enter x and y:");
                scanf("%d %d",&x,&y);
                printf("Multiplication:%d\n",x*y);
                break;
            case 'D':
                printf("Enter x and y:");
                scanf("%d %d",&x,&y);
                printf("Division:%d\n",x/y);
                break;
            case 'E' :
                printf("Exit");
                return 0;
            default:
                printf("Invalid input");

        }
    }
}
