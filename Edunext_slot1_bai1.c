//Kiểm tra nhiệt độ và bật/tắt đèn LED tương ứng. 
// hiểu đề bài là: kiểm tra xem nhiệt độ trong phòng nếu quá 20.8 độ thì bật đèn còn nhỏ hơn sẽ không bật đèn.
#include<stdio.h>
int main(){
    float (nhietdo);

    printf("nhap gia tri cam bien nhiet do: ");
    scanf("%f", &nhietdo);
    
    if(nhietdo > 20.8)
    {
        printf("bat_den \n");
    }
    else
    {
        printf("khong_bat_den \n");
    }
    
    return 0;
}
// true