// chuyen do che do cua thiet bi dua vao nut bam
// o day ta su dung vi du la cai quat co 4 nut bam 0,1 2 3 
#include<stdio.h>
int main(){
    // khai bao bien 

    int button;

    while(1){
    printf("Enter button number(0 -3): ");
    scanf("%d", &button);

    // xu ly du lieu
    if ( button == 1 )
    {
        printf("Fan low\n");
    }
    else if(button ==2)
    {
        printf("Fan medium\n");
    }
    else if (button == 3)
    {
        /* code */ printf("Fan high\n");
    }
    else 
    {
        printf("Fan of \n");
    } 
    }   
    return 0;
}
