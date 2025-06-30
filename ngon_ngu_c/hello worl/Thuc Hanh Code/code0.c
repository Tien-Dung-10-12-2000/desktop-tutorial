// kieu du lieu va khai bao bien
/*hong co du lieu ta dung kieu du lieu void
khai bao bien ta dung ten kieu du lieu rooi ta dien ten vien
vi du: double ( kieu du lieu) _ sothucdochinhsaccao ( so thuc co do chinh xac cao tu 15 toi 17 so sau dau phay
, khong co khoang cach)

xuat du lieu ra man hinh trong c. bai nay la nhap du lieu ,khai bao bien va xuat ra man hinh
 xuat du lieu ta su dung printf("format string", argument_list);
("%d, %f, %c, %.4f") chuoi dinh dang co dau % no se dua du lieu vao so %, 
\n de xuong dong
*/
#include<stdio.h>
int main(){
    unsigned short tuoi; // kieu du lieu so nguyen co the dung shot cho toi uu hoa bo nho
    int so_tien_co;
    int so_tien = 60000;
    char C = 'A'; //%c
    long dansovietnam = 100000000;
    double dien_tich;
    float dien_tich_tam_giac;
    float x1, x2;
    x1 = 3.14666666666666666666666666666;
    x2 = 99,99999;
    float a, b, c;
    char ten [] = "ngo tien dung";

    

    printf("bai 003 - Xuat du lieu ra man hinh \n ");
    
    printf("Gia tri x la: %d\n",so_tien);
    printf("Gia tri x1 la: %.6f\n", x1);
    printf("Gia tri x2 la: %.3f\n", x2);
    printf("Gia tri cua x1 khong lam tron: %f\n", x1);
    printf("x2 = %.2f, x1 = %.2f \n", x2, x1);
    
    printf("\n %c \n", C );
    printf("dien tich nha toi la: %lf\n", dien_tich);

    printf("%s\n", ten);



    return 0;

}