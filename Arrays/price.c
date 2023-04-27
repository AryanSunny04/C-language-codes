// WAP to store the prices of three items and add gst to it while giving the output.

#include<stdio.h>
int main()
{
    int price[3];
    printf("ENter prices");
    scanf("%d", &price[0]);
     scanf("%d", &price[1]);
     scanf("%d", &price[2]);


     printf(" GST added Price of Item 1 = %f", price[0]+ (0.18*price[0]));
       printf(" GST added Price of Item 2= %f", price[1]+ (0.18*price[1]));
       
       printf(" GST added Price of Item 1 = %f", price[2]+ (0.18*price[2]));
    return 0;
}