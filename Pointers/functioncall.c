// Pointers in function call.

#include<stdio.h>

void square (int n);

void _square (int *n);

int main(){

    int number = 4;
    square (number);
    printf("  ");
    printf ("Number = %d \n", number);

    // value changed using pointers
    _square (&number);
    printf("  ");
    printf ("Number = %d", number);
    return 0;
}


// call by value 


void square ( int n) {

n = n * n;
printf("Square = %d", n);

}

// call by reference
void _square (int *n){

    *n = (*n) * (*n);
    printf("Square = %d", *n);
}