// stuct( cau truc) // kieu du lieu hop the cua nhieu kieu du lieu con
// array la mang nen chi su dung 1 kieu du lieu, con struct co the nhom nhieu kieu du lieu voi nhau
#include<stdio.h>

  struct Javmove { // bien thanh vien
    char title[100];// bien tieu de
    char idol[30]; // ten idol
    int year; // bien nam
  };
int main (){
    struct Javmove movie = 
    { "anh code may man", "mariaozwa", 2025};

    printf("%s\n", movie.title);
    printf("%s\n", movie.idol);
    printf("%d\n", movie.year);

    return 0;

}
