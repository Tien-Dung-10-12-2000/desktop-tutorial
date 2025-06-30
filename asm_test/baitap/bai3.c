#include<stdio.h>
int main(){
    float cambien1, cambien2;

    printf("nhap gia tri cam bien 1: ");
    scanf("%f", &cambien1);

    printf("nhap gia tri cam bien 2: ");
    scanf("%f", &cambien2);

    if (cambien1 > cambien2) 

    {
        printf("gia tri lon nhat la: %.2f \n", cambien1);

    }
    else if (cambien2 > cambien1)

    {
        printf("gia tri lon nhat la: %.2f \n", cambien2);
    }
    
    else 
    {
        printf("hai cam bien gia tri bang nhau: %.2f \n", cambien1);
    }
    return 0;
}
// true
