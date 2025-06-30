// vu nguyen code
#include<stdio.h>
int main (){

    int year_of_birth = 1992; // kdlso nguyen, bieen
    
    float weight = 63.5;

    printf("Nhap lan luot nam sinh va can nang: \n"); // in ra mang hinh de hoi nam sinh
    scanf("%d%f", &year_of_birth, &weight); // nhap tu man hinh vao, 

    int age = 2025 - year_of_birth; // tinh tuoi dua tren nam sinh lay 2025 tru di nam nhap

    printf("Nam nay toi %d tuoi. Toi nang %.1f kg \n", age, weight); // in ra manf sau khi nhap
/*
    if(age <= 16) // neu lon hon hoacj bng 16, de nhanh
    {
         printf("Du toi di tu");
    }
    
    else
    {
        printf("Chua du toi di tu");
    }

*/   
/*
    for(int i = 1; i <= 10; i++) // for vong lap co so tu thu
    {
        printf(" Toi nam nay %d tuoi. \n", age + i);
    }
        */
/*
    int i = 11;
    i > 10;
    do 
    {
        printf(" Nam nay toi %d tuoi:\n ", age);
    }
    while (i < 10);
    {
       printf("Nam toi %d tuoi \n", age);
    }
*/  
    int i = 0;

    while(i < 100)
    {
        printf("%d. Nam nay toi %d tuoi. \n", i, age);
        i++;

    }

    return 0; 


}