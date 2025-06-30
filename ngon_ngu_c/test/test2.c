// dinh nghia ham gom kieu du lieu ten ham tham so gia tri tra ve, trong C phai viet truooc
// muc dich de sau nay co the thay the de tinh toan 

// vieets 1 ham tinh tong 2 so
// ham dinh nghi viet truoc ham main
// vi du
// du lieu tra ve la int
// hai tham so la a va b 
#include<stdio.h>
int summary (int a, int b){
    return a+b; // tra ve tong cua a va b
}
int main (){
    // nhap du lieu vao bien a va bien b
    int a;
    int b;
    scanf("%d", &a);
    printf("Enter a = %d\n", a);

    scanf("%d",&b);
    printf("Enter b = %d\n", b);
    // goi ham summary de tinh tong
    int result = summary (a,b);
    //in ket qua
    printf("Result = %d\n", result); 
    return 0;
}