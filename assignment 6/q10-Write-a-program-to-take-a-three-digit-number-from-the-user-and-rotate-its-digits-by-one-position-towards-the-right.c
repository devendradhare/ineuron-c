// Write a program to take a three digit number from the user and rotate its digits by one position towards the right
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,last_digit;
    printf("\nEnter a three digit number : ");
    scanf("%d",&num);
    last_digit = num%10;
    num /= 10;
    last_digit *= 100;
    last_digit += num;
    printf("%d",last_digit);


    
    getch();
    
}