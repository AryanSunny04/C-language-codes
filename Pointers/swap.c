// swap two numbers using pointers.
// One time with call by value and again with call by reference .

#include<stdio.h>

void swap (int a, int b);

void _swap (int *a, int *b);

int main()
{
    int a = 10;
    int b = 12;
    swap (a,b);
    printf("A = %d   B = %d \n", a , b);

    _swap (&a , &b);
     printf("A = %d   B = %d \n", a , b);
    return 0;
}


// call by value
void swap (int a , int b){
    
    int t=a;
    a=b;
    b=t;
    printf("A = %d   B = %d \n", a , b);
}


// call by reference 
void _swap (int *a, int *b){

    
    int t= *a;
     *a= *b;
    *b=t;
    printf("A = %d   B = %d \n", *a , *b);
    
}