// viiet chuong trinh 
//1: cho phép nhập vào từ bàn phím 2 số nguyên 
//2: tìm số lớn nhất của 2 số 
//3: thực hiện bằng xây dựng hàm để tìm ra số nguyên lớn nhất bất kỳ
#include<stdio.h>

    int main (){
        int a;
        int b;
        scanf("%d", &a);
        printf("nhap gia tri a: \n", a);
        scanf("%d" , &b);
        printf("nhap gia tri b: \n", b);

         if (a >= b)
         {
            printf("A lon hon B: \n", a);
            scanf("%d", &a);

         } else {
            printf(" B lon hon A: \n", b);
            scanf("%d", &b);
         }
         return 0;

    }

