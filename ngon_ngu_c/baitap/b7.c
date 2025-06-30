//kiem tra dien ap dau vao hien thi trang thai ' on dinh' || 'canh bao'
// khai bao bien dien ap, neu dien ap tu 110 toi 240v la on dinh, neu ngoai truong hop nay la canh bao
#include<stdio.h>
int main(){
    // khai bao bien
    int voltage = 0;

    printf("Enter the voltage:");
    scanf("%d", &voltage);

    if (voltage >= 110 && voltage <= 240)
    {
    printf(" stable voltage \n");
    }
    else
    {
        printf("Warning");
    }
    
return 0;
}
// true, co su dung chat de ghi phan if, hien tai da nho ta 
// ta can nhap bien kem dieu kien && not phan con lai

