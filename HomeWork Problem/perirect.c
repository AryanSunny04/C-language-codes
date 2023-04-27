// WAP to cal the peri of rectangle and take a and b from user.


#include<stdio.h>
void rect(int a , int b);
int main()


{
    int a , b;
    printf("Enter the value of a and b");
    scanf("%d %d", &a, &b);

    rect(a,b);

    return 0;
}

void rect(int a , int b){

    int peri = 2*a*b;
    printf("%d", peri);
}