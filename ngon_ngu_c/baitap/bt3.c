//nhap so tuw 1 toiw 3 in ra ten thiet bi tuong ubng
#include<stdio.h>
int main(){
    // khai bao bien
    int choice = 1;
    int Dien_Thoai;
    int May_Tinh;
    int Lap_Top;

    printf("Enter value 1 of 3: \n");
    scanf("%d", &choice);

    // xu ly du lieu
    switch (choice)
    {
    case 1:
        printf("Dien thoai\n", &Dien_Thoai);
        break;
    case 2:
        printf("May Tinh\n", &May_Tinh);
        break;
    case 3:
        printf("Lap Top\n", &Lap_Top);
        break;
    default:
        printf("khong co gia tri \n");
        break;
    }

    return 0;

}
// true
