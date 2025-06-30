/*Viết một chương trình mà:

Nhập hai số nguyên a và b.

Sử dụng hàm dựa trên con trỏ để hoán đổi giá trị của a và b.

In ra các giá trị sau khi hoán đổi.

Cài đặt hàm:
void swap(int *x, int *y);

❌ Không được hoán đổi trực tiếp trong main bằng cách dùng a = b;.
*/
#include<stdio.h>
void swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

int main(){
    // khai bao bien
    int a, b;

    // xu ly du lieu
    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    swap(&a, &b);
    printf("swap A = %d, B = %d\n", a,b);
    scanf("%d", &a);

    return 0;

}
// true