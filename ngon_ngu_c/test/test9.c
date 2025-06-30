// phep toan tu, suwr dungj toans tuw 
#include<stdio.h>
int main (){
    float a, b;
    printf("Nhap Vao Gia Tri A = \n");
    scanf("%f", &a);

    printf("Nhap vao gia tri B = \n");
    scanf("%f", &b);

    float tong = a + b;
    printf("%.2f + %.2f = %.2f \n", a, b, tong);

    float hieu = a - b;
    printf("%.2f - %.2f = %.2f \n", a, b, hieu);

    float tich = a * b;
    printf("%.2f * %.2f = %.2f \n", a, b, tich);

    float thuong = a /b;
    printf("%.2f / %.2f = %.2f \n", a, b, thuong);

    

    return 0;
}
