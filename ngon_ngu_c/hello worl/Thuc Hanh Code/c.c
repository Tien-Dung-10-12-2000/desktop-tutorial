// vu nguyen code
#include<stdio.h>
int main (){

    int year_of_birth = 1992;
    
    float weight = 63.5;

    printf("Nhap lan luot nam sinh va can nang: \n");
    scanf("%d%f", &year_of_birth, &weight);

    int age = 2025 + year_of_birth;

    printf("Nam nay toi %d tuoi. Toi nang %.1f kg", age, weight);
    
    return 0;


}