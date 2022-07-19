// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD
#include<stdio.h>
#include<conio.h>
int main()
{
    double inr = 76.23,amt;
    printf("\nCurrent price 1 USD = 76.23 INR\nConvert INR into USD\nEnter INR : ");
    scanf("%lf",&amt);
    amt/=inr;
    printf("%lf",amt);
    getch();
}