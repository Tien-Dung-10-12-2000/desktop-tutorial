// duyeejt gia tri trong mang bang con tro
#include<stdio.h>
int main(){
    int array[7] = {10,20,50,1,0,99,100};
    int *ptr = array;
    // duyet mang bang con tro
    for(int i = 0; i < 7; i++) 
    {
        printf("Array [%d] = %d\n", i , *(ptr + i));
    }

    
    return 0;
}