// đề bài:huyển đổi chế độ hoạt động của thiết bị dựa vào nút nhấn. 
//hiểu đề bài là: khi bật công tắc thì đèn sáng, bấm thêm lần nữa là đèn tắt
#include<stdio.h>
int main(){
    int(Cong_Tac);

    printf("Cong_Tac (0-1): ");
    scanf("%d", &Cong_Tac);

    if (Cong_Tac == 0)
    {
        printf("Den_Tat");
    }

    else if (Cong_Tac == 1)
    {
        printf("Bat_Den");
    }

    return 0;
}
//true