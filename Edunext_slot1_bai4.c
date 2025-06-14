// đề bài: bật quạt làm mát nếu nhiệt độ vượt ngưỡng cho phép.
 //Hiểu đề bài là cho nhiệt độ vuợt quá 33 độ thì sẽ bật quạt làm mát
#include<stdio.h>
int main(){
    int(Nhiet_Do);

    printf("Nhap_Nhiet_Do: \n");
    scanf("%d", &Nhiet_Do);

    if(Nhiet_Do > 33)
    {
        printf("Bat_Quat");
    }
    else
    {
        printf("Khong_Bat_Quat");
    }

    return 0;
}
//true