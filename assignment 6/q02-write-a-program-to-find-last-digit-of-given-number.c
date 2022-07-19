// program to find last digit of given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("\n\n        last digit of given number\nEnter a number : ");
    scanf("%d",&n);
    printf("\nlast digit of %d is %d\n",n,n%10);
    getch();
}