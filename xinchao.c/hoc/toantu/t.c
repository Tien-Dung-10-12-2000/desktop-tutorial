// bai tap giai phuong trinh bac nhat
// de bai: viet phuong trinh cho nhap cac he so cua phuong trinh bac nhat 1 an ax + b = 0( voi a != 0)
// hayx in ra man hinh nghiem cua phuon trinh da cho, a luon khac 0
#include<stdio.h>
// khai bao bien 
// phuong trinh bac  nhat: ax + b = 0;
int main(){
float a, b, x;
// nhap du lieu
printf("Nhap he so cua truong trinh ax + b = 0");

printf("\na=");
scanf("%f", &a);

printf("\nb=");
scanf("%f", &b);


//xu ly du lieu

x = -b/a;

// xuat du lieu ra man hinh
printf("x = %.2f", x);

}