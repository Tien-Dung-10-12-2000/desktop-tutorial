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
    int SinhVien;

};

int main(){
    int i = 0;

    while(i < 18)

    {
    struct Student std[18];
    
    printf("Nhap Ten: ");
    scanf("%s", std[i].Ten);

    printf("Nhap Tuoi: ");
    scanf("%d", &std[i].Tuoi);

    printf("Nhap Diem: ");
    scanf("%f", &std[i].Diem);

    printf("Nhap Lop: ");
    scanf("%s", std[i].Lop);
    
    printf("Ten: %s - Tuoi: %d - Diem: %2.f - Lop: %s\n", std[i].Ten, std[i].Tuoi, std[i].Diem, std[i].Lop);
    i++;

    }
    
     printf("Danh sach sinh vien: \n");
     for (i = 0; i < 18; i++){
        printf("SinhVien %d: - Ten %s: - Tuoi %d: - Dien %.2f - Lop %s", i + 1, std[i].Ten, std[i].Tuoi, std[i].Diem, std[i].Lop);
     }
    
    
    return 0;
}
    
    

