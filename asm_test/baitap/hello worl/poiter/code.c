//kieu du lieu..
// bai tap tinh tong dien app trong mang bang con tro
// cach 1 la khi biet gia tri dien app truoc va it
/*
#include<stdio.h>
int main(){
    float Voltage[] = {3.3,3.6,3.9,6.9,9.6,9.3};
    float *V; // con tro float
    float Total = 0;
    int i;

    V = Voltage; // tro con tro vao dau mang

    for(i = 0; i < 6; i++){
        Total += *(V + i); // lay gi tri cua con tro den
    }

    printf(" Total Voltage: %.2f\n", Total);
    return 0;


}
    float Voltage[] gan cho dien app bang 6 phan tu
    float *V: khai bao con tro bang *V
    float Total(tong) = 0: gan tong bang 0
    int i; gans i bang kieu so thuc

    V = Voltage: gan con ro vao dau mang ( V = Voltage[0])

    *(V + i): lay gia tri phan tu i trong mang

    Total += *(V + i) con don vao tong
    */
// neu chua biet gia tri dien ap ma muon tu nhap vao ta se phai nhap nhu sau

#include<stdio.h>

int main(){
    float Voltage[3]; // 
    float *V;
    float Total = 0;
    int i;
    // nhap 3 gia tri dien app

    printf("Enter 3 voltage values: \n");
    for(i = 0; i < 3; i++){
        printf("Voltage %d = ", i + 1);
        scanf("%f", &Voltage[i]);
    }

    // tinh tong bang con tro
     V = Voltage;
     for (i = 0; i < 3; i++){
        Total += *(V + i);
     }

     printf("Total Voltage = %.2f\n", Total);
     return 0;


}
