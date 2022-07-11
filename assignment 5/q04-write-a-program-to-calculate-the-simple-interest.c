// program to calculate simple interest
#include<stdio.h>
#include<conio.h>
int main()
{
    float si, time, rate, P_balence;
    printf("\n\n        simple interest calculater\n\nEnter initial principal balence : ");
    scanf("%f",&P_balence);
    printf("Enter annual interest rate : ");
    scanf("%f",&rate);
    printf("Enter time (in year) : ");
    scanf("%f",&time);
    si = (P_balence*rate*time)/100;
    printf("si = %f",si);
    
    getch();
}