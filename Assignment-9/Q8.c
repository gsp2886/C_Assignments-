//  Q8
//  Program to convert a positive number into a negative number and negative number
//  into a positive number using a switch statement

#include<stdio.h>
int main()
{
	int number;
	printf("Enter a num:");
	scanf("%d",&number);

	switch(number >= 1)
	{
		case 1:
				number=number*(-1);
				printf("the Negative form of the number is %d",number);

			break;
		case 0:
				number=number*(-1);
				printf("the Positive form of the number is %d",number);
		    break;

	}
}
