// Write a program to store the tables of 2 and 3 using array. 

#include<stdio.h>

void storeTable ( int arr [][10], int n , int m , int number);
int main()
{
    int tables [2][10];
    storeTable(tables , 0 , 10 ,2 );
    storeTable (tables , 1 , 10 , 3);

    for (int i = 0 ; i<10 ; i++){
        printf("%d \t", tables[0][i]);
    }

    
    for (int i = 0 ; i<10 ; i++){
        printf("%d \t", tables[1][i]);
    }
    return 0;
}

void storeTable ( int arr [][10], int n , int m , int number){
    for (int i = 0; i<m ; i++)   // 0-10
    
    {

        arr[n][i] = number * (i+1);   //2 , 4 ,6 ,8, 10 , 12 ...
    }


}
