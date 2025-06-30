//đề bài: tính tổng các số từ 1 tới 10.
//hiểu đề bài là: tính tổng các số nguyên từ 1 tới 10 như 1+2+3+4...10
#include<stdio.h>
int main(){
    int Tong = 0;
    int i;

    for(i = 0; i <= 10; i++){
        Tong += i;
    }   
        printf("Tong = i %d\n", Tong);
    
    return 0;
}
//true

    

