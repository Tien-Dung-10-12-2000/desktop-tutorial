#include<stdio.h>
int main(){
    int n = 0;
    int x = 0;
    int y = 0;
    scanf("%d", &n);
    scanf("%d", &x);
    scanf("%d", &y);
    int result = 0;
    if (n==1)
    {
        result = x+y;
        printf("Sum x + y = %d\n", result);
    }
    if(n==2)
    {
        result = x-y;
        printf("Sub x - y = %d\n", result);
    }
    

}