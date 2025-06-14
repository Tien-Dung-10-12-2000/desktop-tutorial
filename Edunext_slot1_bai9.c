//đề bài: hiển thị số đếm từ 10 tới 1
// hiểu đề bài là: in số từ 10 tới số 1 ra màn hình, ta sử dụng i-- ngược lại của i++
#include<stdio.h>
int main(){
    for ( int i = 10; i >= 1; i-- )
    {
    printf("%d\n",i);
    }
    return 0;
}
//true