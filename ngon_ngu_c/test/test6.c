// viiet chuong trinh 
//1: cho phép nhập vào từ bàn phím 2 số nguyên 
//2: tìm số lớn nhất của 2 số 
//3: thực hiện bằng xây dựng hàm để tìm ra số nguyên lớn nhất bất kỳ

#include<stdio.h>
int timSoLonNhat(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int Number1, Number2, Max;

    printf("Nhập số thứ nhất: ");
    scanf("%d", &Number1);

    printf("Nhập số thứ hai: ");
    scanf("%d", &Number2);

    // Gọi hàm đúng cách
    Max = timSoLonNhat(Number1, Number2);

    printf("Số lớn nhất là: %d\n", Max);

    return 0;
}