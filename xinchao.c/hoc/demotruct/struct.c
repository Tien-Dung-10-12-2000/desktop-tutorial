#include<stdio.h>
// tạo 1 cấu trúc tên Student
struct Student{
    char name[50];
    char class[20];
    float gpa;
    int age;
};

int main(){
    // khai baos bieens  kieu Student
    struct Student std;
    // nhap thong tin cho sinh vien

    printf("Nhap ten sinh vien: \n");
    scanf("%s", std.name);

    printf("Nhap lop cua sinh vien: \n");
    scanf("%s", std.class);

    printf("Nhap diem cua sinh vien GPA: \n");
    scanf("%f", &std.gpa);

    printf("Nhap tuoi cua sinh vien AGE: \n");
    scanf("%d", &std.age);

    // in ra thong tin sinh vien

    printf("Name %s - class %s - gpa %f - age %d\n", std.name, std.class, std.gpa, std.age);

    return 0;
}