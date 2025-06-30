// pointer (con tro)
// nho phep toaan chuy cap
#include<stdio.h>
int main (){
    int x =10;
   int* adddress_x = &x;// ga tri cua adddress_x bang &x = 10

    printf("%p", &x); // %p la toan tu dia chi cua x (000000E09C3FFC1C)
    printf("\n%p: %d", adddress_x, *adddress_x);
}



