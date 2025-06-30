// tinh tong cac so tu 1 toi 10\
// khai bao 2 bien sum va i;
// su dung vong lap for va  = 
#include<stdio.h>
int main(){
    // khai bao bien
    int sum = 0;
    int i;

    // xu ly du lieu

    for(i=0; i<=10; i++)
    {
        sum = sum + i;
    }

    printf("The sum of numbers from 1 to 10 is: %d\n ", sum);

    return 0;
    
}
// true neu de i bang 0 hoac i = 1 ket qua khong khac biet
// nhung de += ket qua sai, con = thi tong dung
// nho muon in ra ket qua can có %d cua bien sum
