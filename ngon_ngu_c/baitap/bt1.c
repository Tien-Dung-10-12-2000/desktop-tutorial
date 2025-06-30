// nhập số từ 1 tới 5 hiển thị chế độ 'A/B/C/D/E'
// su du if else if else
#include<stdio.h>
int main(){
    // khai bao bien
  int choice;

  printf(" Nhap so tu 1 toi 5: \n", choice);
  scanf("%d", &choice);

  if(choice == 1)
  {
    printf("1 = A\n");
  }

   else if (choice == 2)

  {
    printf(" 2 = B\n");

  } 
  else if  (choice == 3)
  {
    printf(" 3 = C\n");

  } 
  else if (choice == 4)
  {
    printf (" 4 = D\n");

  } 
  else if (choice == 5)
  {

    printf(" 5 = E\n");
  }
  else 
  {
    printf(" Khong co che do nay \n", &choice);
  }



    return 0;
}
// true


