#include<stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;

    printf("Value of a = %d\n", a); // giá trị của a
    printf("Address of a = %p\n", &a);// địa chỉ của a

    printf("Value of ptr = %p\n", ptr);// giá trị của ptr
    printf("Address of ptr = %p\n", &ptr); //địa chỉ của ptr

    // thay doi gia tri bang 100, thay doi gia tri qua bien a

    a = 100;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);

    printf("Value of ptr = %p\n", ptr);
    printf("Address of ptr = %p\n", &ptr);

    printf("After Value poiterd by ptr = %d\n", *ptr);

    // thay gia tri bang 200, gias tri thong qua con tro

    *ptr = 200;

    printf("After changing value thorough ptr: \n");

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);

    printf("Value of ptr = %p\n", ptr);
    printf("Address of ptr = %p\n", &ptr);

    printf("Ater value poiter by ptr = %d\n", *ptr);



    return 0;
}