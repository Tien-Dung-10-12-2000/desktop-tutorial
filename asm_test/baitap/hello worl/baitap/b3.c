// so sanh 2 gia tri cam bien in ra gia trij lon nhat
// khai bao bien va su dung toan tu de tim min va max
#include<stdio.h>
int main(){
    // khai bao bien
    float sensor1, sensor2;

    printf("Enter the Sensor 1 value: ");
    scanf("%f", &sensor1);

    printf("Enter the Sensor 2 value: ");
    scanf("%f", &sensor2);
    // xu lu du lieu
    if(sensor1 > sensor2)
    {
    printf("Sensor 1 lon hon Sensor 2");
    } else {
        printf("Senson 2 lon hon Senson 1");
    }
    

    return 0;
}
// TRUE, so sanh 2 cam bien qua if else
