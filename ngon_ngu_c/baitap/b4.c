// neu cam bien  ánhang thap thi in 'bat den'
// trong khoang bao nhieu la thap? 
// 0 toi 10 la thap
// sau do them 1 bai 10 toi 20 la sáng tot
// cach lam khai bao bien cam bien anh sang, can nguoi dung nhap 
#include<stdio.h>
int main(){
    // khai bao bien
    float sensor1 ;
    float sensor2 ;

    // xu ly du lieu
    printf(" Enter Sensor 1 Value: ");
    scanf("%f", &sensor1);

    printf(" Enter Sensor 2 Value: ");
    scanf("%f", &sensor2);

    if (sensor1 <= 10)
    {
        printf("Tunrn on the light");
    } 

    else if (sensor2 > 20)
    {
        printf("Good light");
    }
    
    else
    {
    printf("No need to tunrn on the light");
    }
    return 0;
}
// true 
//khong khai bao gi truoc else if boi chinh trong else if da co dieu kien roi
