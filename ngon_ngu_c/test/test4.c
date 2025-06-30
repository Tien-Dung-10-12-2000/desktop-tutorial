#include<stdio.h>

int summary(int a, int b ){
    return a + b;
}

int main(){
    int a, b;
    int result;
    while (1)
    {
        printf("Enter 2 numbers(a b): ");
        scanf("%d", &a);
        scanf("%d", &b);
        result = summary(a,b);
        printf("Result = %d\n", result);

        
    }
    return 0;
    
}