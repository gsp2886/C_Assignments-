/*Q7
Program to take the value from the user as input electricity unit charges and calculate
total electricity bill according to the given condition . Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

*/

#include<stdio.h>

int main()
{
    int charge;
    float total,final_total;
    printf("Enter Electricity unit charges:");
    scanf("%d",&charge);

    switch( 50 < charge  )
    {
        case 1:
                switch(150 < charge)
                {
                    case 0:// 51 - 150
                            total= 50*0.5 + (charge-50)*0.75;
                            break;
                    case 1:
                            switch(charge < 250)
                            {
                            case 0: //More then 250
                                total=50*0.5 + 100*0.75 + 100*1.2 + (charge-100)*1.5;
                                break;
                            case 1: // 150-250
                                total= 50*0.5 + 100*0.75 + (charge-100)*1.2;
                                break;
                            }
                }
                break;
        case 0:
                total=charge*0.5;
                break;
    }

    final_total=total + total*0.2;

    printf("\nTotal Electricity bill %f\n",final_total);

    return 0;
}
