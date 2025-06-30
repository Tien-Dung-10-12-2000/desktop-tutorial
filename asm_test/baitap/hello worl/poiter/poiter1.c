#include<stdio.h>
int main (){
    // vis du ve con tro
    int a =10;
    int *ptr = &a;
    // hien thi gia tri va dia chi cua bien a
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);

    //gia tri va dia chi cua con tro ptr

    printf("Value of ptr = %p\n", ptr);
    printf("Address of ptr =%p\n",&ptr);

    // gias tri tham chieu con tro ptr 

    printf("Value poiter by ptr = %d\n", *ptr);

    *ptr +=5;

    printf("Value poiter by ptr = %d\n", *ptr);



    return 0;

}