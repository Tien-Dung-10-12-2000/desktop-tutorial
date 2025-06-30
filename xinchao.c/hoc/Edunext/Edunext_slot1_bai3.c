// đề bài: Xác định mức pin và hiển thị thông báo tương ứng (Thấp, Trung bình, Cao).
// nghĩa của đề bài là: xác định mức pin giả sử 80 tới 100% là cao, 30 tới 80% là trung bình, 30 tới 0% là thấp.
#include<stdio.h>
int main(){
    int Pin;

    printf("Nhap muc pin (0 - 100 ): ");
    scanf("%d", &Pin);

    if (Pin < 0 && Pin > 100)
    printf("Pin khong qua 0 - 100 \n");

     else if (Pin <= 30)
    {
        printf("Pin Thap\n");
    }

    else if (Pin <= 80)
    {
        printf("Pin Trung Binh \n");
    }

     else

    {
        printf ("Pin cao \n");
    }

    return 0;

}
// true