// program to find first digit of a given three digit number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("\n\n        First digit of a given three digit number\nEnter a three digit number : ");
    scanf("%d",&n);
    printf("The first digit of %d is %d\n\n",n,n/100);
    getch();
}