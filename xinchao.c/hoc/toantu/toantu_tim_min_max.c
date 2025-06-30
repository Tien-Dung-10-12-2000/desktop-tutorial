/*
tim gia tri min max giua 2 so A va B

cac kien thuc can co 
- cach khai bao bien
- cach nhap du lieu
- cach xuat du lieu
- cac phep toan
- cac toan tu so sanh

*/

#include<stdio.h>

int main(){
    // khai bao bien
    int a, b, min, max;

    // nhap du lieu
    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    // xu ly du lieu
    min = (a < b)? a : b; // dung toan tu neu a < b thi la bieu thuc 1, bieu thuc 1 true thi lay gia tri cua bieu thuc 2 neus bieu thuc 1 flase thi lay gia tri cua bieu thuc 3 
    max = (a > b)? a : b; // dung toan tu neu bieu thuc 1 a > b la true thi lay gia tri o bieu thuc 1 con neu la flase thi lay gia tri o bieu thuc 3 
    // toan tu so sanh dieu kien (a < b)? a:b
    // toan tu so sanh dieu kien a va b (a < b) ? a : b;

    // xuat du lieu
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
    /*
    Enter a = 6
Enter b = 9
Max = 9
Min = 6
    */
}
 //true
 