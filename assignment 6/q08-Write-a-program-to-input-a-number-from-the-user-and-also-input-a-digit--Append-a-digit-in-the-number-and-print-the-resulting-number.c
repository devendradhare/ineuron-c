// Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number
// (Example - number=234 and digit=9 then the resulting number is 2349)
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,digit;
    printf("\n\n        Add the digit at the last of the number\nEnter a number : ");
    scanf("%d",&num);
    printf("Enter a digit : ");
    scanf("%d",&digit);
    
    num = num*10+digit;

    printf("\nAfter adding : %d",num);
    getch();
}