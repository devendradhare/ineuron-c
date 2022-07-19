// Write a program to make the last digit of a number stored in a variable as zero
// (Example - if x=2345 then make it x=2340)
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("\n\n        Make the last digit of the number zero\nEnter a number : ");
    scanf("%d",&n);
    n /= 10;
    n *= 10;
    printf("\n%d",n);
}