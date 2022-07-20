// Write a program to check whether a given number is positive or non positive
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n\nCheck whether the number is positive or non positive\nEnter a number : ");
    scanf("%d",&num);
    if (num>0)
    {
        printf("\nThe number is positive\n");
    }
    else
    {
        printf("\nThe number is non positive\n");
    }
    getch();
}