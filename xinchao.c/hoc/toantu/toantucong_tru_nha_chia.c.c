// phep toan tu, suwr dungj toans tuw. cong tru nhan chia trong lap trinh
#include<stdio.h>
int main (){
    float a, b;
    // input
    printf("Nhap Vao Gia Tri A = \n"); // Enter value a
    scanf("%f", &a);

    printf("Nhap vao gia tri B = \n"); // Enter value b
    scanf("%f", &b);
    // output
    float tong = a + b;
    printf("%.2f + %.2f = %.2f \n", a, b, tong); // sum

    float hieu = a - b;
    printf("%.2f - %.2f = %.2f \n", a, b, hieu);// difference

    float tich = a * b;
    printf("%.2f * %.2f = %.2f \n", a, b, tich); // Product

    float thuong = a /b;
    printf("%.2f / %.2f = %.2f \n", a, b, thuong);//Quotient
    
    return 0;
}
// true