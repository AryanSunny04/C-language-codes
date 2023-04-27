// Write a program to take input from user and find its cube .


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value");
    scanf("%d", &n);
    int area= n*n*n;
    printf("Cube = %d", area);
    return 0;
}