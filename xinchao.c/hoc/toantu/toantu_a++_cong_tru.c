//++ tawng hoac giam gia tri cua bien them 1 don vi
// ++ co bien a++ them 1 don vi, de sau la ket thuc cau lenh moi cong them 1 don vi
//++a la tang 1 don vi truoc khi thuc hienc au lenh
#include<stdio.h>
int main (){
    int a = 6;
    int b = 9;

    printf("%d", a++);
    printf("\n");

    printf("%d", a);
    printf("\n");

    printf("%d\n", a++);
    
    printf("%d\n", --b);

    printf("%d\n", b--);

    int tong = a + b;
    int giatri = a++;

    printf("%d + %d\n", tong, giatri);

    return 0;
    
}
// toans tu  +, - , a++, --a 
//trong lap trinh c
