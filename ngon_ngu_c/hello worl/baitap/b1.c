    // viet chuong trinh kiem tra nhiet do va in ra 
    // " Nong" neu lon hon 40 do
    // tai khai bao bien va su  dung dieu kien if
#include<stdio.h>
int main(){
    // khai bao bien
    float Temperature;
    
    printf("Enter the temperature: ", &Temperature);
    scanf("%d", &Temperature); // nhan du lieu nguoi dung nhap vao
    // xu ly du lieu
    if  ( Temperature > 40) 
    {
        printf("Hot");
    }
    return 0;
    
    // x
}

// true, nhung quen ve scanf printf