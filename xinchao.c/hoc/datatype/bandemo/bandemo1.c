#include <stdio.h> // su dung thu vien de nhap xuat du lieu va su dung duoc cac ham  printf, scanf

int main() { // int la so nguyen thuong tra ve 0 la ket thuc truong trinh. moi truong trinh C deu bat dau bang main
    int i; // int la so nguyen, vay o day la khai bao 1 so nguyen i duoc dung la bien trong vong lap for
    for (i = 1; i <= 5; i++) { // vong lap for bao gom 3 phan. i = 1 la khoi tao. i <= 5 dieu kien, neu i nho hon hoac bang 5 thi tiep tuc lap. vay vong lap se chay i =1 2 3 4 5 tong 5 lan
        printf("Vong lap lan thu %d\n", i); // printf la in ra man hinh, t se in ra "vong lap lan thu  X"    voi X la gia tri cua i moi lan lap lai. %d la dinh dang cho so nguyen (int) voi i la gia tri thay the  %d
    }
    return 0;// tra ve 0 tu ham main bao cho he dieu hanh rang chuong trinh chay thanh cong
}

int // so nguyen  vd: int sohocsinh khai bao bien so hoc sinh (so nguyen)
float // so thuc vd: float sodiemtongket khai bao so diem tong ket 8.5 (so thuc)
char // ky tu dau tien vd: char kytudautien khai bao kytudautien 'A', 'b', '3', '!'
double // so thu do chinh xac kep(cao) vd: double PI kai bao so pi chinh xac double Pi = 3.141592653589793;