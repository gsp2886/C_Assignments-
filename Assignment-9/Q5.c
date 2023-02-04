/*Q5
if(var == 1)
printf("good");
else if(var == 2)
printf("better");
else if(var == 3)
printf("best");
else
printf("invalid");

*/

#include <stdio.h>

int main() {

    int n;
    printf("Enter a choice between 1-3 : ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("Good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("invalid");
    }

    return 0;
}
