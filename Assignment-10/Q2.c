//  Write a function to calculate simple interest
//  S.I. = P × R × T

float SI(float p,float r,float t)
{
    return (p*r*t)/100;
}

int main()
{
    float prin,rate,time;
    printf("Enter Principle Amount:");
    scanf("%f",&prin);
    printf("Enter Rate:");
    scanf("%f",&rate);
    printf("Enter Time Period:");
    scanf("%f",&time);

    printf("%.3f",SI(prin,rate,time));

    return 0;
}
