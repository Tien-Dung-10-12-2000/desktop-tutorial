//Đo 10 lần nhiệt độ và tính trung bình.
//Hiểu đề bài: ta đo nhẫu nhiên 10 lần nhiệt độ trong ngày, sử dụng câu lệnh for
#include<stdio.h>
int main(){
    float Nhiet_Do, Tong = 0;
    int i = 1;

    while (i <= 10)
    {
        printf("Nhap Nhiet Do Lan %d:", i);
        scanf("%f", &Nhiet_Do);
        Tong += Nhiet_Do;
        i++;
    }
    printf("Trung Binh Nhiet Do La: %.2f\n", Tong / 10);
    printf("Trung Binh Nhiet Do La: %f\n", Tong / 10);
    return 0;

}
//true
    