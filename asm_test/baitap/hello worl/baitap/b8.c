// xac dinh muc pin va hien thi thong bao tuong ung (thap, trung binh, cao)
// o bai nay ta co 3 bien khac nhau
// chi pin ra thanh 3 phan tu 1 toi 20 la pin yeu, tu 20 toi 70 la tb, 70 toi 100 la cao

// khai bao 3 bien, su dung if, eles it, else
#include<stdio.h>
int main(){
    // khai bao bien
    int voltage;

    printf("Enter voltage (0 ---> 100): ");
    scanf("%d", &voltage);

    // xl du lieu

    if (voltage >= 1 && voltage < 20)
    {
        printf("Low Battery \n");
    }

    else if (voltage >= 20 && voltage <= 70 )
    {
        printf("Medium battery \n");
    }

    else if (voltage < 70 && voltage >= 100)
    {
        printf(" High battery \n");
    }
    else
    {
        printf("re-enter the value");
    }
    
    return 0;
}
// true, co sai o cac dau lon hon va nho hon
