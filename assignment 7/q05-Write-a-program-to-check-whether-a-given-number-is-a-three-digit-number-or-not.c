// Write a program to check whether a given number is a three digit number or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n\n        ---Check the number is three digit number or not---\nEnter a number : ");
    scanf("%d",&num);
    if (num>99&&num<1000)
    {
        printf("%d is a three digit number",num);
    }
    else
    {
        printf("%d is not a three digit number",num);
    }
    getch();
}