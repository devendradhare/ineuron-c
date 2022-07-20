// Write a program to check whether a given number is even or odd without using the modulus operator
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n\n        ---Check the number is even or odd---\nEnter a number : ");
    scanf("%d",&num);
    if (num/2*2 == num)
    {
        printf("%d is a even number",num);
    }
    else
    {
        printf("%d is a odd number",num);
    }
    getch();
    
}