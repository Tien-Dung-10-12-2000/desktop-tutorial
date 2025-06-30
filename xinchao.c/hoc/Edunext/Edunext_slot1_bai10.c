//Đề bài: in các số chia hết cho 3 từ 1 đến 30
//Hiểu đề bài là: in các số từ 1 đến 30 chia hết cho số 3, nó cũng giống với bài 8

#include<stdio.h>
int main(){
    for(int i = 1; i <= 30; i++){
        if( i % 3 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;

}
//true