/*Q3
Write a program which takes the day number of a week and displays a unique
greeting message for the day.

*/

#include <stdio.h>

int main() {
    int day;

    printf("Enter Day Number\n");
    scanf("%d", &day);

    switch(day){
        case 1 : printf("Monday\nI wish that you are able to make a difference to life today and \nthrough the coming week…. Wishing you a Happy Week my dear friend…. May you rock the coming week!!\n");
            break;
        case 2 : printf("Tuesday\nSending my best wishes on Happy Week to the most special person….\n Wishing you a week full of smiles, growth and success…. May you make the most of this new week.\n");
            break;
        case 3 : printf("Wednesday\n I wish each and every week of your life is blessed with new \nopportunities to grow… Sending my love to you on the occasion of Happy Week.\n");
            break;
        case 4 : printf("Thursday\nMay the new week turns out to be the most amazing week of your \nlife…. Sending best wishes to you with the start of a Happy Week!!!\n");
            break;
        case 5 : printf("Friday\nSuccess and joy, good health and prosperity are the things I wish \nfor your this week and for many more weeks in your life blessed with the best of the things….. Happy Week to you!!!\n");
            break;
        case 6 : printf("Saturday\n Let us hope for a cheerful and entertaining week ahead…. Three \ncheers for the coming week full of new hopes and new days….. Sending warm wishes on New Week to your family and loved ones.\n");
            break;
        case 7 : printf("Sunday\nI wish for a New Week showered with blessings of God…. I wish you \nall the success and love of your loved ones in this coming week…. Warm wishes on New Week to you.\n");
            break;
        default: printf("Invalid Input !!!!\n");
    }

    return 0;
}
