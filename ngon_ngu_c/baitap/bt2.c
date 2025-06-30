// nhập số từ 1 tới 5 hiển thị chế độ 'A/B/C/D/E'
// su dung vong lap vo han
#include<stdio.h>
int main(){
// khai bao bien 
int choice=0;

while(1)
{

printf("Enter a number from 1 to 5: ", choice);
scanf("%d", &choice);

// xu ly du lieu
switch (choice)
{
case 1:
    printf("A\n");
    break;
case 2:
    printf("B\n");
    break;
case 3:
    printf("C\n");
    break;
case 4:
    printf("D\n");
    break;
case 5:
    printf("E\n");
    break;

}


}
return 0;
}
// true
