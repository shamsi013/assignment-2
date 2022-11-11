#include<stdio.h>
int main()
{
    float USD, INR;
    printf("enter rupees:");
    scanf("%f",&INR);
    USD = INR/76.23;
    printf("INR=%.2f, USD=%.2f",INR,USD);
    return 0;
    
}