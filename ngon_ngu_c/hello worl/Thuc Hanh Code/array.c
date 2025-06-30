// mang ( array)
#include<stdio.h>
int main (){
   /* int a[3] = {1,2,3}; // khai bao mang,  bien a co 3 phan tu 1 2 3
    a[0] = 10; // bien a[0] duoc thay doi va gan bang 10
    a[1] = a[1] * 2;// bien a[1] duoc thay gia tri va gan bang a[1] * 2( 2 x 2 = 4)
    a[2] = a[2] /2;// bien a[2] duoc thay gia tri bang a[2] / 2 ( 2 chia 2 = 1) vay a[2]= 1

    printf("%d %d %d", a[0], a[1], a[2]);// in ra gia tri da duoc bien doi
    */

   /* char x[50] = "Ngo Tien Dung"; // kieu char cos 50 phan tu va chuoi dung " "

    printf("%s", x); // %s la kieu char
    */
   
    int x[3] = {1, 2, 3};

    for(int i =  0; i <= 2; i++)
    {
        printf("%d ", x[i]);
    }
   
    char y[5] = "123";

    printf("%s", y);

 


}
