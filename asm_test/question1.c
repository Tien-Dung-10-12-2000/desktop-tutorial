/*
Write a C program that: 
- Inputs an integer `n` (1 ≤ n ≤ 100) and an array of `n` integers. 
- Prints the input array. 
- Calculates and prints how many elements are greater than the average value of 
the arra

Viết một chương trình C để:
- Nhập một số nguyên `n` (1 ≤ n ≤ 100) và một mảng gồm các số nguyên `n`.
- In mảng đầu vào.
- Tính toán và in ra có bao nhiêu phần tử lớn hơn giá trị trung bình của
mảng
*/
// khai bao bien, so nguyen n (dk n lon hon 1 nho hon 100)
// dung vong lap for de hien thi tung phan tu
// tinh tong cac phan tu trong mang
// tinh gia tri trung binh

#include<stdio.h>
int main() {
    int n;
    int arr[100];
    int sum = 0;
    float average;

    printf("Enter an integer n (1 <= n <= 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Enter n (1 --> 100): \n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    average = (float)sum / n;
    printf("Average value: %.2f\n", average);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > average) {
            count++;
        }
    }

    printf("Number of elements greater than the average: %d\n", count);
    return 0;
}