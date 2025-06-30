// tinh tong 5 so nguyen nhap tu ban phim
// bai nay can tinh mang arr
// arr[]
#include<stdio.h>
int main() {
    // khai bao bien
    int arr[5];
    int sum = 0;
    
    // nhap 5 so nguyen
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // tinh tong
    }
    
    // in tong
    printf("Tong cua 5 so nguyen la: %d\n", sum);
    
    return 0;
}