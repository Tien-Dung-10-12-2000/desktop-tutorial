// viet chuong trinh nhap vao danh sach sinh vien cua lop c2505E cho den khi ngung nhap
//2: luu tru danh sach sinh vien vao 1 mang student
// hien thi that ca ra man hinh
// goi ys: - su dung vong lap while de quyet dinh viec dung nhap 
//- tao ra 1 mang Strudent voi 18 phan tu 
//- su dung vong lap for de hien ra danh sach sinh vien
//- nang cao: hien thi sinh vien co diem GPA cao nhat 
#include<stdio.h>

struct Student{
    char Ten[50];
    int Tuoi;
    float Diem;
    char Lop[20];

};

int main(){
    int i = 0;

    while(i < 18)

    {
    struct Student std;
    
    printf("Nhap Ten: ");
    scanf("%s", std.Ten);

    printf("Nhap Tuoi: ");
    scanf("%d", &std.Tuoi);

    printf("Nhap Diem: ");
    scanf("%f", &std.Diem);

    printf("Nhap Lop: ");
    scanf("%s", std.Lop);

    printf("Ten: %s - Tuoi: %d - Diem: %2.f - Lop: %s\n", std.Ten, std.Tuoi, std.Diem, std.Lop);

    i++;
    }
    
    
    return 0;
}
    
    

