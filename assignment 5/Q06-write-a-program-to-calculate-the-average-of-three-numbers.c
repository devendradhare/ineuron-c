// program to calculate average of three numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,average;
    printf("\n\n        Calculate average of three numbers\nEnter any three numbers : ");
    scanf("%f%f%f",&a,&b,&c);

    average = (a+b+c)/3;

    printf("\nAverage of the numbers is %f",average);
    
    getch();
}