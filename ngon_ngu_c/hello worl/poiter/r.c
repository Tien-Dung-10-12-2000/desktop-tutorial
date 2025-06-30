/*Viết một chương trình C để:
- Nhập một số nguyên `n` (1 ≤ n ≤ 100) và một mảng gồm các số nguyên `n`.
- In mảng đầu vào.
- Tính toán và in ra có bao nhiêu phần tử lớn hơn giá trị trung bình của
mảng
*/
#include<stdio.h>
int main() {
    // khai bao bien
    int n;
    int arr[100];
    int sum = 0;
    float average;

    // xu ly du lieu   
    printf("Enter an integer n (1 <= n <= 100): ");
    scanf("%d", &n);

    // kiem tra dieu kien
    if (n < 1 || n > 100) {
        printf("n must be between 1 and 100.\n");
        return 1; // ket thuc chuong trinh neu n khong hop le
    }

    // nhap mang
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // tinh tong cac phan tu
    }

    // in mang
    printf("Input array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // tinh gia tri trung binh
    average = (float)sum / n;
    printf("Average value: %.2f\n", average);

    // dem so phan tu lon hon gia tri trung binh
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > average) {
            count++;
        }
    }

    // in ket qua
    printf("Number of elements greater than the average: %d\n", count);

    return 0;
}