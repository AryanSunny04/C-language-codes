#include<stdio.h>
int main(){
int n, sum;
printf("Enter the value of n");
scanf("%d", &n);

for (int j=1;j<=10;j++){
    sum=j*n;
    printf("%d x %d = %d\n",j , n, sum);
}


return 0;

}