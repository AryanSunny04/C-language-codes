// syntex for writing down a pointer variable.\

#include<stdio.h>

int main () {
    

    int age=22;
    int *ptr= &age;
    int _age= *ptr;

    // address
    printf("%d", _age);
    printf ("\n");
   printf("%u", &age);
    printf ("\n");
    printf("%u", &ptr);
    
    return 0;
}