#include<stdio.h>
int main()
{
    int HH,MM;
    printf("Enter HH:MM in same format\n");
    scanf("%d:%d",&HH,&MM);
    printf("%d:%d converted to %d Hour and %d Minute",HH,MM,HH,MM);
    return 0;
}
