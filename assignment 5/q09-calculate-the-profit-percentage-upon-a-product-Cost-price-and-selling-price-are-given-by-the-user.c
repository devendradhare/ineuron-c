// program to calculate the profit percentage upon a product
// cost price and selling price are given by the user
#include<stdio.h>
#include<conio.h>
int main()
{
    float coP, slP, profit_p;
    printf("\n\n        Calulate the profit percentege upon a product\nEnter cost price : ");
    scanf("%f",&coP);
    printf("Enter sell price : ");
    scanf("%f",&slP);

    profit_p = ((coP*slP*1.0)/coP)-coP;
    // profit_p = ((slP-coP)/coP)*100.0;

    printf("\nprofit = %f%%",profit_p);
    
    getch();
}