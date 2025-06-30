//bat quat lam mat neu nhiet do vuot nguong cho phep
// o day ta co nhiet do vuot nguong: 28
// khai bao bien nhiet do
// khi nhiet do qua 28 do thi bat qua duoi khong bat
#include<stdio.h>
int main(){
    // khai bao bien
    int temperature;

    printf("Enter Temperature: ");
    scanf("%d", &temperature);
    // xu ly du lieu

    if (temperature > 28)
    {
        printf("Turn on the fan");
    }
    else
    {
        printf("Turn off the fan");
    }
    return 0;
}