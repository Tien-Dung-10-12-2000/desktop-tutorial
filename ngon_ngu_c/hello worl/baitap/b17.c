// de bai nhap ma so va hien thi ten cam bien tuong ung
// khai bao bien 5 ma so
// su dung switch case de lm bai tap
#include<stdio.h>
int main(){
    // khai bao bien
    int value;

    printf("Enter value (0 ---> 5)");
    scanf("%d", &value);

    // xu ly du lieu

    switch (value)
    {
    case 1:
        printf(" phone == 1 \n");
        break;
    case 2: 
        printf(" computer == 2 \n");
        break;
    case 3:
        printf("hair dryer == 3 \n");
        break;
    case 4:
        printf("TV == 4");
        break;
    case 5:
        printf("refrigerator == 5 \n");
        break;
    
    default:
        printf("re-enter");
        break;
    }


    return 0;
}