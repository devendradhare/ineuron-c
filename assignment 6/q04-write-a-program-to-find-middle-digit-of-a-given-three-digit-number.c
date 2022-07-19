// program to find middle digit of a given three digit number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("\n\n        Middle digit of a given three digit number\nEnter a three digit number : ");
    scanf("%d",&n);
    printf("\nthe middle digit of %d is %d",n,(n/10)%10);
    getch();
}