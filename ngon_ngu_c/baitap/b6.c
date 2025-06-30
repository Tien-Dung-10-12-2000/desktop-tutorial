// kiem tra nhiet do bat/ tat den led tuong ung
// o day ta co 2 bien bat va tat 
// neu nhiet do cao hon 9 do thi bat, duoi 9 do thi tat den

#include<stdio.h>
int main (){
    // khai bao bien
    
    float temperature;
    int light_on = 1;
    int light_off = 0;

    printf("Enter Temperature: ");
    scanf("%f", &temperature);

    if (temperature > 15)
    {
        printf("%d", light_on);
    }
    else
    {
        printf("%d" ,light_off);
    }
    return 0;
}
//true, hien thi 1 la bat 0 la tat
