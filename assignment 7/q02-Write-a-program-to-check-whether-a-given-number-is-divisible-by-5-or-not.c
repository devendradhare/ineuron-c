// Write a program to check whether a given number is divisible by 5 or not
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("\ncheck the number is divisible by 5 or not\nEnter a number : ");
    scanf("%d", &num);
    if (num % 5)
    {
        printf("\nThe number is not divisible by 5\n");
    }
    else
    {
        printf("\nThe number is divisible by 5\n");
    }

    getch();
}