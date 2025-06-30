// dung switchcase
#include<stdio.h>
int main (){
    int temp = 0;
    printf(" Enter temperature in celsius: \n");
    scanf("%d", &temp);
    switch (temp)
{
    case 0 ... 15:
        printf("Off the light \n");
        break;
    case 30 ...50:
        printf("Off the light \n");
        break;
    case 16 ... 29:
        printf("On the light \n");
    
        
    default:
        break;
    }
}
