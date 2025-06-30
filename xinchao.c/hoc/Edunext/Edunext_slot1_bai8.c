//in ra các số chẵn từ 2 tới 20
// hiểu đề bài là: in các số chắn như 2 4 6 8.. tới 20. để in số chẵn ở đây ta cần sử dụng toán tử
// if(i % 2 == 0) để in ra số chẵn. if ở đây là câu lệnh có điều kiện
#include<stdio.h>
int main(){
    for(int i = 2; i <= 20; i++ ) {
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
//true