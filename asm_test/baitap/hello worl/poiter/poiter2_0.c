// su dung mang voi poiter
#include<stdio.h>
int main (){
    int x[] = {1,2,3,4,5};
    printf("Mang x: \n");
  for (int i = 0; i < 5; i++)
  {
    printf("%p\n", &x[i]); // in gia tri cac phan tu
  }

  printf("Dia chi cua x: %p\n", &x); //dia chi mang (= &x[0])
  printf("Gia tri cua x: %d\n", *x); // o day x cungxx la dia chi do da gan x  voi mang {1,2,3,4,5}

  printf("Dia chi cua x[0]: %p\n", &x[0]);// dia chi phan tu dau vi x[0]
  printf("Gia tri cua x[0]; %d\n", x[0]);// dia chi phan tu dau vi x[0]
    

    return 0;

}
