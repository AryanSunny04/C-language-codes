// Write a program to print the average of three numbers.

#include<stdio.h>
int main()
{
    int Num1, Num2, Num3;
    printf("Enter the three numbers");
    scanf("%d%d%d", Num1,Num2,Num3);
    int avg = Num1+Num2+Num3/3;
    printf("Average = %d", avg);
    return 0;
}