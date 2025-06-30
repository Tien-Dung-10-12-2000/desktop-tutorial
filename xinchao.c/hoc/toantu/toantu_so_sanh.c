//toan tu so sanh trong lap trinh c
#include<stdio.h>
int main (){
    int a, b;
    printf("Enter A =");
    scanf("%d", &a);

    printf("Enter B =");
    scanf("%d", &b);

    printf("%d == %d la %d\n", a, b, a == b);
    printf("%d != %d la %d\n", a, b, a != b);
    printf("%d > %d la %d\n", a, b, a > b);
    printf("%d < %d la %d\n", a, b, a < b),
    printf("%d >= %d la %d\n", a, b, a >= b);
    printf("%d <= %d la %d\n", a, b, a <= b);


}
// true

/*
== so sanh bang vd: 4 = 3 ket qua bang fale
!= so sanh khac vf: 6!=9 true

*/
/*
Enter A = 5
Enter B =2
5 == 2 la 0
5 != 2 la 1
5 > 2 la 1
5 < 2 la 0
5 >= 2 la 1
5 <= 2 la 0
*/