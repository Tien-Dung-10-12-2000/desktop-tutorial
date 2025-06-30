#include<stdio.h>
int main(){
    int mark; // interger
    printf("Enter mark: ");
    scanf("%d", &mark); // <-- address of mark
    printf("\nYour mark  = %d", mark);
    printf("\nSize of int = %d", sizeof(int));
    return 0;
}
