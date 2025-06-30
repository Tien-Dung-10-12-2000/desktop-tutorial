/*
toan tu dieu kien trong lap trinh c.
// bieu thu 1, bieu thuc 2, bieu thuc 3 la cac bieu thuc
// neu bieu thuc 1 la true thi 
tinh toan tiep bieu thuc 2 va tro thanh gia tri cua toan bo bieu thuc

Nguoc lai neu bieu thuc 1 la false thi 
tính toán biểu thức 3 và trở thành giá trị của toàn bộ biểu thức
ví dụ: x = (5 > 3)? 1:0 --> x = 1 // true đúng
y = (5 < 3)? 1:0 --> y = 0 // false sai

*/

// muốn biết số nhập từ bàn phím vào là số chẵn hay số lẻ
#include<stdio.h>
int main(){
    int a;
    printf("Enter value A: ");
    scanf("%d", &a);

    printf("%d la so %s\n", a, (a %2 == 0)? "chan":"le");
    printf("%d la so %s\n", a, (a %2 == 0)? "chan":"le");
    printf("%d la so %s\n", a, (a %2 == 0)? "chan":"le");
    

}
/*Enter value A: 9
9 la so le

Enter value A: 6
6 la so chan
*/