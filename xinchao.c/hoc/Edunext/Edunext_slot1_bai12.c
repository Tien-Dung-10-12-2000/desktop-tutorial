//Đề bài: chớp tắt led 10 lần với khoảng dừng
// hiểu đề bài là: tắt mở 10 lần đèn led, kiểu tắt rồi mở xong tắt lại mở. giả sử đây là tắt 1s và mở 1s
#include<stdio.h>
int main(){
    int i = 1;
    while(i <=10){

        printf("Lan %d Led Bat \n", i);
        printf("Doi 1s \n");
        printf("Lan %d Led Tat \n", i);
        printf("Doi 1s \n");
        i++;

    }
    return 0;

}
//true
