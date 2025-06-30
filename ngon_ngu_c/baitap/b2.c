// kiem tra neu dien ap duoi 3v thi in ' Pin Yeu'
// bai nay ta khai bao bien roi su dung dieu kien if
#include<stdio.h>
int main(){
    // khai bao bien 
    float voltage = 0;

    printf("Enter the voltage: ");
    scanf("%f", &voltage);
    // xu ly du lieu

    if (voltage <= 3)
    {
        printf("Low battery \n");
    } else {
        printf("battery ok \n");
    }
    
return 0;
}
// true , con ra cham
