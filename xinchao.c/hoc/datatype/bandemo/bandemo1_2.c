#include<stdio.h>

float sothuc = 9.6; // so thuc, voi so thuc la 9.6
void insothuc(){
    printf("so thuc trong ham %f\n", sothuc);
}
int main(){
    printf("so thuc trong main %f\n", sothuc);
    insothuc();
    return 0;
}

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