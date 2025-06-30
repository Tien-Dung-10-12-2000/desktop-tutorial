// kiem tra nhiet do am hay duong de hien thi canh bao
// neu nhiet do la am thi canh bao 'co tuyet'
// neu nhiet do la duong thi canh bao 'khong co tuyet'
// neu nhiet do tu 0 toi 15do thi canh bao 'troi lanh' 
// neu nhiet do tu 15 toi 28d la 'troi mat'
// o bai nay chi can in ra canh bao neu thoi tiet am thoi
// khai bao bien, neu so nhap vao la am thi in ra canh bao con tu 0 den duong la ko in

#include<stdio.h>
int main(){
    // khai bao bien
    float temperature;

    // xu ly du lieu
    while(1)
    {
    printf("Enter Temperature: ");
    scanf("%f", &temperature);

    if (temperature < 0)
    {
        printf("Warning \n");
    }
    else
    {
        printf("normal \n");
    } 

}
    return 0;

}
// true
// them thu chay vo han
