#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    printf("nhap a: ");
    scanf("%d", &a);
    
    printf("nhap b: ");
    scanf("%d", &b);

    printf("nhap c: ");
    scanf("%d", &c);
    
    printf("A = %d, B = %d, C = %d", a, b, c);

    if(a >= b)
    {
        if(a >=c)
        {
            printf("MAX a = %d", a);
        }
        else
        {
            printf("MAX C = %d", c);
        }
    }
        else
        {
            printf("MAX B = %d", b);
        }
    
}

