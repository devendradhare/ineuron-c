// Write a program to find greater between two numbers. Print one number if both numbers are the same
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("\n\n        ---Find greater between two numbers---\nEnter two number : ");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    {
        printf("%d is greater",num1);
    }
    else
    {
        printf("%d is greater",num2);
    }
    getch();
}