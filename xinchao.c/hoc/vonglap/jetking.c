#include<stdio.h>

int main() {
    int a, b;
    printf("enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("'0' represents the false and '1' represents the true. \n");
    printf("a == b: %d\n", a==b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a < b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
  
    return 0;
} 
