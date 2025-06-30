// đề bài Kiểm tra điện áp đầu vào và hiển thị trạng thái 'Ổn định' hoặc 'Cảnh báo'.
// hiểu đề bài là điện áp vào đèn đủ để phát sáng và không quá công suất bóng đèn là ổn định, ở đây giả sử bóng 5v nếu điện áp vào thấp hơn thì cảnh báo vì không đủ điện để les sáng còn nhiều hơn có thể làm cháy bóng nên cũng cảnh báo.
#include<stdio.h>
int main(){
    int (dienap);

    printf("dien app dau vao: ");
    scanf("%d", &dienap);

    if(dienap == 5)
    {
        printf("on dinh \n");
    }
    else
    {
        printf("canh bao \n");
    }

    return 0;

}
//true