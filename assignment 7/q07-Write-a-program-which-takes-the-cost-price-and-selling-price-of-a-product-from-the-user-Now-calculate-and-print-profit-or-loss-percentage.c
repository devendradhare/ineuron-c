// Write a program which takes the cost price and selling price of a product from the user.
// Now calculate and print profit or loss percentage
#include<stdio.h>
#include<conio.h>
int main()
{
    float coP,slP,profit_p;
    printf("\n\n        ---Calculate profit percentage of the product---\nEnter cost price : ");
    scanf("%f",&coP);
    printf("Enter sell price : ");
    scanf("%f",&slP);
    profit_p = ((slP*100)/coP)-100;
    printf("profit percentage = %f%%",profit_p);
}