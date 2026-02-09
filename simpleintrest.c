#include<stdio.h>
int main()
{
    float p,t,r,SI;
    printf("Enter Principle:");
    scanf("%f",&p);
    printf("Enter Time:");
    scanf("%f",&t);
    printf("Enter Rate:");
    scanf("%f",&r);
    
    SI=(p*t*r)/100;
    printf("Simple intrest:%.3f",SI);
    return 0;
}