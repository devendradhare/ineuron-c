// Write a program to check whether a given number is even or odd
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("\n\ncheck the number is even or odd\nEnter a number : ");
    scanf("%d", &num);
    if (num % 2)
    {
        printf("\nThe number is odd\n");
    }
    else
    {
        printf("\nThe number is even\n");
    }

    getch();
}