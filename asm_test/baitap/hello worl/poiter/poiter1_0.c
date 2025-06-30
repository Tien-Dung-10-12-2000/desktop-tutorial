#include<stdio.h>

int main (){
    //di chi bien
    int vao;
    printf("Nhap vao: ");
    scanf("%d", &vao);

    printf("Nhap gia tri cua var: %d\n", vao);
    printf("Dia chi cua bien var trong bo nho la: %p\n ", &vao);

    
    int *pc, c;
    c = 5;
    pc = &c; // gias tri cua pc bay gio bang dia chi cua c --> dia chi cua c = 5 nen gia tri pc =5

    
    printf("Gia tri cua c la: %d\n", *pc);
    printf("Dia chi cua c la: %p\n", pc);

    *pc =1;
    printf("Gia tri cua C la: %d\n", c);
    printf("Gia tri cua *pc la: %d\n", *pc);
    printf("Dia chi cua *pc la: %p\n", pc);




    return 0;

}





































