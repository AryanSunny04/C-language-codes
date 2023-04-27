// Find the area of a square, circle and rectangle using functions.
#include<stdio.h>
float squareArea(float side);
float circleArea (float rad );
float rectangleArea (float a, float b );
int main()
{
    int side = 5;
    printf("The area of square is: %f", squareArea(side));
    return 0;
}

float squareArea(float side) {
return side * side;
}

float circleArea (float rad ){
return 3.14* rad * rad;
}

float rectangleArea (float a, float b ){
return a*b;

}