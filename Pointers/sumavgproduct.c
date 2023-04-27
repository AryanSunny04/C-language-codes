// Write a function to calculate the sum , product and average of 
// two numbers. Print the average in the main function.



#include<stdio.h>

void Dowork ( int a , int b , int *sum ,int *prod, int *avg );
int main()
{
    int a = 3 ;
    int b = 7;
    int sum , prod , avg;
    Dowork (a,b, &sum , &prod , &avg);
    printf(" sum = %d \n prod = %d \n avg = %d \n", sum , prod , avg);
    return 0;
}

void Dowork (int a , int b , int *sum , int *prod , int *avg){

     *sum = a+b;
     *prod = a*b;
     *avg = (a+b)/2;
    

}