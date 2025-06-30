#include<stdio.h>

char main(){
    char kihieuA = 'A';// biến cục bộ trong hàm main
    printf("'A' trong main: %c\n, kihieuA" );//in ra màn hình chữ A
    {//mở khối mã mới
        char kihieuB = 'B'; // biến cục bộ khối mã kihieuB
        printf("'B' trong ma khoi: %c\n; kihieuB"); //in ra màn hình B trong khối mã kí hiệu B vừa được gán trong biến 
    }// kihieuB bị hủy ở dấu ngoặc vuông này
    return 0; // kết thúc trương trình chạy về 0, không sai sót
} // kết thúc main

const int songuyen = 10; // số nguyên bằng 10
const float sothuc PI = 3,14 // khai báo hằng số const trước số thực float gán cho nó là số pi
// sẽ nhận lỗi biên dịch nếu cố thay đổi hằng số  (const int = 10...)